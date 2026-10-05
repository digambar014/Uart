`timescale 1ns / 1ps

module uart_rx #(
    parameter CLK_FREQ  = 50_000_000,
    parameter BAUD_RATE = 115_200
)(
    input  wire       clk,
    input  wire       reset,

    input  wire       rx,

    output reg  [7:0] data_out,
    output reg        data_valid
);

    // -------------------------------------------------------------------------
    // Baud rate clock divider & Bit widths
    // -------------------------------------------------------------------------
    localparam integer CLKS_PER_BIT  = CLK_FREQ / BAUD_RATE;
    localparam integer CLKS_HALF_BIT = CLKS_PER_BIT / 2;
    localparam integer CNT_WIDTH =
                    (CLKS_PER_BIT <= 1) ? 1 : $clog2(CLKS_PER_BIT);

    // -------------------------------------------------------------------------
    // State machine definition
    // -------------------------------------------------------------------------
    localparam [1:0] IDLE  = 2'b00,
                     START = 2'b01,
                     DATA  = 2'b10,
                     STOP  = 2'b11;

    reg rx_sync0;
    reg rx_sync1;

    // Synchronize RX input to clock domain (idle state is 1'b1)
    always @(posedge clk or posedge reset) begin
        if (reset) begin
            rx_sync0 <= 1'b1;
            rx_sync1 <= 1'b1;
        end 
        else begin
            rx_sync0 <= rx;
            rx_sync1 <= rx_sync0;
        end
    end

    wire rx_s = rx_sync1;

    reg [1:0]           state;
    reg [CNT_WIDTH-1:0] clk_cnt;
    reg [2:0]           bit_cnt;
    reg [7:0]           shift_reg;

    always @(posedge clk or posedge reset) begin
        if (reset) begin
            state      <= IDLE;
            clk_cnt    <= {CNT_WIDTH{1'b0}};
            bit_cnt    <= 3'b000;
            shift_reg  <= 8'h00;
            data_out   <= 8'h00;
            data_valid <= 1'b0;
        end 
        else begin
            data_valid <= 1'b0;

            case(state)

                IDLE: begin
                    clk_cnt <= {CNT_WIDTH{1'b0}};
                    bit_cnt <= 3'b000;

                    if(!rx_s) begin
                        state <= START;
                    end
                end


                START: begin
                    if(clk_cnt == CLKS_HALF_BIT-1) begin
                        clk_cnt <= {CNT_WIDTH{1'b0}};

                        if(!rx_s) begin
                            state <= DATA;
                        end
                        else begin
                            state <= IDLE;
                        end
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1'b1;
                    end
                end


                DATA: begin
                    if(clk_cnt == CLKS_PER_BIT-1) begin
                        clk_cnt   <= {CNT_WIDTH{1'b0}};
                        shift_reg <= {rx_s, shift_reg[7:1]};

                        if(bit_cnt == 3'd7) begin
                            bit_cnt <= 3'b000;
                            state   <= STOP;
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
                    if(clk_cnt == CLKS_PER_BIT-1) begin
                        clk_cnt <= {CNT_WIDTH{1'b0}};
                        state   <= IDLE;

                        if(rx_s) begin
                            data_out   <= shift_reg;
                            data_valid <= 1'b1;
                        end
                    end
                    else begin
                        clk_cnt <= clk_cnt + 1'b1;
                    end
                end


                default: begin
                    state <= IDLE;
                end

            endcase
        end
    end

endmodule



                   

					  


						    



