`timescale 1ns / 1ns
module odd_even_merge_recursion #
(
    parameter LOG_INPUT = 4, 
    parameter DATA_WIDTH = 8,
    parameter SIGNED = 0,
    parameter ASCENDING = 1

)
(
    input clk, rst, x_valid,
    input [DATA_WIDTH*(2**LOG_INPUT)-1 : 0] x,
    output [DATA_WIDTH*(2**LOG_INPUT)-1 : 0] y,
    output y_valid
);

if (LOG_INPUT > 1) begin
    wire [DATA_WIDTH*(2**LOG_INPUT)-1 : 0] stage0_rslt;
    wire stage0_valid;

    //assign y_valid = stage0_valid;


    odd_even_merge_recursion #
    (
        .LOG_INPUT(LOG_INPUT-1),
        .DATA_WIDTH(DATA_WIDTH),
        .SIGNED(SIGNED),
        .ASCENDING(ASCENDING)
    )
    inst_stage0_0 
    (
        .clk(clk),
        .rst(rst),
        .x_valid(x_valid),
        .x(x[DATA_WIDTH*(2**(LOG_INPUT-1))-1:0]),
        .y(stage0_rslt[DATA_WIDTH*(2**(LOG_INPUT-1))-1:0]),
        .y_valid(stage0_valid)
    );

    odd_even_merge_recursion #
    (
        .LOG_INPUT(LOG_INPUT-1),
        .DATA_WIDTH(DATA_WIDTH),
        .SIGNED(SIGNED),
        .ASCENDING(ASCENDING)
    )
    inst_stage0_1 
    (
        .clk(clk),
        .rst(rst),
        .x_valid(x_valid),
        .x(x[DATA_WIDTH*(2**LOG_INPUT)-1:DATA_WIDTH*(2**(LOG_INPUT-1))]),
        .y(stage0_rslt[DATA_WIDTH*(2**LOG_INPUT)-1:DATA_WIDTH*(2**(LOG_INPUT-1))]),
        .y_valid()
    );


    odd_even_merge_recursion_submodule #
    (
        .LOG_INPUT(LOG_INPUT),
        .DATA_WIDTH(DATA_WIDTH),
        .SIGNED(SIGNED),
        .ASCENDING(ASCENDING)
    )
    inst_stage1 
    (
        .clk(clk),
        .rst(rst),
        .x_valid(stage0_valid),
        .x(stage0_rslt),
        .y(y),   
        .y_valid(y_valid)
    );
end else if (LOG_INPUT == 1) begin
    cae1 #
    (
        .DATA_WIDTH(DATA_WIDTH), 
        .SIGNED(SIGNED),
        .ASCENDING(ASCENDING)
    )
    cae_1 
    (
        .clk(clk),
        .rst(rst),
        .x_valid(x_valid),
        .x_0(x[DATA_WIDTH-1:0]),
        .x_1(x[DATA_WIDTH*2-1:DATA_WIDTH]),
        .y_0(y[DATA_WIDTH-1:0]),
        .y_1(y[DATA_WIDTH*2-1:DATA_WIDTH]),
        .y_valid(y_valid)
    );
end


endmodule

