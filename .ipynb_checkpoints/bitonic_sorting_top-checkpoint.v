
`timescale 1ns / 1ns
`include "bitonic_sorting_recursion_submodule.v"
`include "bitonic_sorting_recursion.v"
`include "input_2.v"

`timescale 1ns / 1ns
module bitonic_sorting_top #
(
    parameter LOG_INPUT_NUM = 4, // Eg: If LOG_INPUT_NUM=4, then input number is 2**4=16 
    parameter DATA_WIDTH = 8,
    parameter SIGNED = 0,
    parameter ASCENDING = 1

)
(
    input clk, rst, x_valid,
    // Put all the inputs into one vector.
    // x[DATA_WIDTH-1 : 0] is the first input x_0, 
    // x[DATA_WIDTH*2-1 : DATA_WIDTH] is the second input x_1, etc.
    input [DATA_WIDTH*(2**LOG_INPUT_NUM)-1 : 0] x,
    output [DATA_WIDTH*(2**LOG_INPUT_NUM)-1 : 0] y,
    output y_valid
);

bitonic_sorting_recursion # 
(
    .LOG_INPUT_NUM(LOG_INPUT_NUM),
    .DATA_WIDTH(DATA_WIDTH),
    .SIGNED(SIGNED),
    .ASCENDING(ASCENDING)
)
bitonic_sorting_inst
(
    .clk(clk),
    .rst(rst),
    .x_valid(x_valid),
    .x(x),
   
    .y(y),
    
    .y_valid(y_valid)
);


endmodule