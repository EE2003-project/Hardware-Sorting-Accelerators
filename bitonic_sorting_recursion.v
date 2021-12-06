`timescale 1ns / 1ns
module bitonic_sorting_recursion #
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

if (LOG_INPUT_NUM > 1) begin
    // Declare the wires which come out of the 2 2**(n-1)-input comparators with opposite ascending feature.
    wire [DATA_WIDTH*(2**LOG_INPUT_NUM)-1 : 0] stage0_rslt;
    wire stage0_valid;


    // Stage 1, use two 2**(n-1)-input comparators with opposite ascending features to sort.
    // Stage0_0 has the same ascending feature with the entire network output.
    // Stage0_1 has the opposite ascending feature with the entire network output.
    bitonic_sorting_recursion #
    (
        .LOG_INPUT_NUM(LOG_INPUT_NUM-1),
        .DATA_WIDTH(DATA_WIDTH),
        .SIGNED(SIGNED),
        .ASCENDING(ASCENDING)
    )
    inst_stage0_0 
    (
        .clk(clk),
        .rst(rst),
        .x_valid(x_valid),
        .x(x[DATA_WIDTH*(2**(LOG_INPUT_NUM-1))-1:0]),
        .y(stage0_rslt[DATA_WIDTH*(2**(LOG_INPUT_NUM-1))-1:0]),
        .y_valid(stage0_valid)
    );

    bitonic_sorting_recursion #
    (
        .LOG_INPUT_NUM(LOG_INPUT_NUM-1),
        .DATA_WIDTH(DATA_WIDTH),
        .SIGNED(SIGNED),
        .ASCENDING(1-ASCENDING)
    )
    inst_stage0_1 
    (
        .clk(clk),
        .rst(rst),
        .x_valid(x_valid),
        .x(x[DATA_WIDTH*(2**LOG_INPUT_NUM)-1:DATA_WIDTH*(2**(LOG_INPUT_NUM-1))]),
        .y(stage0_rslt[DATA_WIDTH*(2**LOG_INPUT_NUM)-1:DATA_WIDTH*(2**(LOG_INPUT_NUM-1))]),
        .y_valid()
    );

    // Stage 2, use a 2**n-input bitonic submodule to sort the outputs of the stage 1.
    // bitonic_sorting_resursion_submodule should have the same ascending feature with the entire network output.
    bitonic_sorting_recursion_submodule #
    (
        .LOG_INPUT_NUM(LOG_INPUT_NUM),
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
end else if (LOG_INPUT_NUM == 1) begin
    input_2 #
    (
        .DATA_WIDTH(DATA_WIDTH),
        
        .SIGNED(SIGNED),
        .ASCENDING(ASCENDING)
    )
    input_2_stage0_1 
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