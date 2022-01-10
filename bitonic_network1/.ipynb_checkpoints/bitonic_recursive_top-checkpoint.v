`timescale 1ns / 1ns
module bitonic_recursive_top #
(
    parameter LOG_INPUT = 5,
    parameter DATA_WIDTH = 8,
    parameter ASCENDING = 1

)
(
    input clk, rst, x_valid,
    input [DATA_WIDTH*(2**LOG_INPUT)-1 : 0] x,
    output [DATA_WIDTH*(2**LOG_INPUT)-1 : 0] y,
    output y_valid
);

sort # 
(
    .LOG_INPUT(LOG_INPUT),
    .DATA_WIDTH(DATA_WIDTH),
    .ASCENDING(ASCENDING)
)
sort_inst
(
    .clk(clk),
    .rst(rst),
    .x_valid(x_valid),
    .x(x),
   
    .y(y),
    
    .y_valid(y_valid)
);


endmodule

