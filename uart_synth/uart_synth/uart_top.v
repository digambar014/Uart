
`timescale 1ns / 1ps

module uart_top #(
    parameter CLK_FREQ  = 50_000_000,
    parameter BAUD_RATE = 115_200
)(
    input            clk,
    input            reset,

    // ── Transmit interface ───────────────────────────────────────────────────
    input      [7:0] tx_data,   // byte to send
    input            tx_valid,  // pulse high for 1+ cycles when tx_data valid
    output           tx_ready,  // high when TX is idle (ready to accept)

    // ── Receive interface ────────────────────────────────────────────────────
    output     [7:0] rx_data,   // received byte
    output           rx_valid   // 1-cycle pulse when rx_data is valid
);

    // ── Internal serial loopback wire ────────────────────────────────────────
    wire serial_line;           // TX serial output → RX serial input

    // ── UART Transmitter ─────────────────────────────────────────────────────
    uart_tx #(
        .CLK_FREQ  (CLK_FREQ),
        .BAUD_RATE (BAUD_RATE)
    ) u_tx (
        .clk   (clk),
        .reset (reset),
        .data  (tx_data),
        .valid (tx_valid),
        .ready (tx_ready),
        .tx    (serial_line)
    );

    // ── UART Receiver ────────────────────────────────────────────────────────
    uart_rx #(
        .CLK_FREQ  (CLK_FREQ),
        .BAUD_RATE (BAUD_RATE)
    ) u_rx (
        .clk        (clk),
        .reset      (reset),
        .rx         (serial_line),   // loopback from TX
        .data_out   (rx_data),
        .data_valid (rx_valid)
    );

endmodule
