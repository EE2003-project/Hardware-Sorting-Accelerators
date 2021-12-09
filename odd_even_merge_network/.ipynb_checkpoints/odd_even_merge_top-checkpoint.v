`timescale 1ns / 1ns
module odd_even_merge_top #
(
    parameter LOG_INPUT = 8, 
    parameter DATA_WIDTH = 32,
    parameter SIGNED = 0,
    parameter ASCENDING = 1

)
(
    input clk, rst, x_valid,
    input [DATA_WIDTH*(2**LOG_INPUT)-1 : 0] x,
    output [DATA_WIDTH*(2**LOG_INPUT)-1 : 0] y,
    output y_valid
);

odd_even_merge_recursion # 
(
    .LOG_INPUT(LOG_INPUT),
    .DATA_WIDTH(DATA_WIDTH),
    .SIGNED(SIGNED),
    .ASCENDING(ASCENDING)
)
odd_even_merge_i
(
    .clk(clk),
    .rst(rst),
    .x_valid(x_valid),
    .x(x),
    .y(y),
    .y_valid(y_valid)
);


endmodule

