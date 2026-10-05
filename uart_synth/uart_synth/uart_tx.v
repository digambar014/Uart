`timescale 1ns / 1ps

module uart_tx #(
    parameter CLK_FREQ  = 50_000_000,
    parameter BAUD_RATE = 115_200
)(
    input  wire       clk,
    input  wire       reset,
    input  wire [7:0] data,
    input  wire       valid,

    output wire       ready,
    output reg        tx
);

    // -------------------------------------------------------------------------
    // Baud rate clock divider & Bit widths
    // -------------------------------------------------------------------------
    localparam integer CLKS_PER_BIT = CLK_FREQ / BAUD_RATE;
    localparam integer CNT_WIDTH =
                    (CLKS_PER_BIT <= 1) ? 1 : $clog2(CLKS_PER_BIT);

    // -------------------------------------------------------------------------
    // State Machine Definition
    // -------------------------------------------------------------------------
    localparam [1:0] IDLE  = 2'b00,
                     START = 2'b01,
                     DATA  = 2'b10,
                     STOP  = 2'b11;

    reg [1:0]           state;
    reg [7:0]           shift_reg;
    reg [2:0]           bit_cnt;
    reg [CNT_WIDTH-1:0] clk_cnt;

    assign ready = (state == IDLE);

    always @(posedge clk or posedge reset) begin
        if (reset) begin
            state     <= IDLE;
            clk_cnt   <= {CNT_WIDTH{1'b0}};
            bit_cnt   <= 3'b000;
            shift_reg <= 8'h00;
            tx        <= 1'b1;
        end 
        else begin
            case(state)

                IDLE: begin
                    tx <= 1'b1;

                    if(valid && ready) begin
                        shift_reg <= data;
                        clk_cnt   <= {CNT_WIDTH{1'b0}};
                        state     <= START;
                    end
                end


                START: begin
                    tx <= 1'b0;

                    if(clk_cnt == CLKS_PER_BIT-1) begin
                        clk_cnt <= {CNT_WIDTH{1'b0}};
                        bit_cnt <= 3'b000;
                        state   <= DATA;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1'b1;
                    end
                end


                DATA: begin
                    tx <= shift_reg[0];

                    if(clk_cnt == CLKS_PER_BIT-1) begin
                        clk_cnt   <= {CNT_WIDTH{1'b0}};
                        shift_reg <= {1'b0, shift_reg[7:1]};

                        if(bit_cnt == 3'd7) begin
                            state <= STOP;
                        end
                        else begin
                            bit_cnt <= bit_cnt + 1'b1;
                        end
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1'b1;
                    end
                end


                STOP: begin
                    tx <= 1'b1;

                    if(clk_cnt == CLKS_PER_BIT-1) begin
                        clk_cnt <= {CNT_WIDTH{1'b0}};
                        state   <= IDLE;
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1'b1;
                    end
                end


                default: begin
                    state <= IDLE;
                    tx    <= 1'b1;
                end

            endcase
        end
    end

endmodule

