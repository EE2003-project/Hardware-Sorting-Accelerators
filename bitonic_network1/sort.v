`timescale 1ns / 1ns
module sort #
(
    parameter LOG_INPUT = 4, 
    parameter DATA_WIDTH = 8,
    parameter ASCENDING = 1

)
(
    input clk, rst, x_valid,
    input [DATA_WIDTH*(2**LOG_INPUT)-1 : 0] x,
    output [DATA_WIDTH*(2**LOG_INPUT)-1 : 0] y,
    output y_valid
);

if (LOG_INPUT > 1) begin
    wire [DATA_WIDTH*(2**LOG_INPUT)-1 : 0] intm;
    wire intm_valid;


    sort #
    (
        .LOG_INPUT(LOG_INPUT-1),
        .DATA_WIDTH(DATA_WIDTH),
        .ASCENDING(ASCENDING)
    )
    r1
    (
        .clk(clk),
        .rst(rst),
        .x_valid(x_valid),
        .x(x[DATA_WIDTH*(2**(LOG_INPUT-1))-1:0]),
        .y(intm[DATA_WIDTH*(2**(LOG_INPUT-1))-1:0]),
        .y_valid(intm_valid)
    );

    sort #
    (
        .LOG_INPUT(LOG_INPUT-1),
        .DATA_WIDTH(DATA_WIDTH),
        .ASCENDING(1-ASCENDING)
    )
    r2
    (
        .clk(clk),
        .rst(rst),
        .x_valid(x_valid),
        .x(x[DATA_WIDTH*(2**LOG_INPUT)-1:DATA_WIDTH*(2**(LOG_INPUT-1))]),
        .y(intm[DATA_WIDTH*(2**LOG_INPUT)-1:DATA_WIDTH*(2**(LOG_INPUT-1))]),
        .y_valid()
    );

    merge #
    (
        .LOG_INPUT(LOG_INPUT),
        .DATA_WIDTH(DATA_WIDTH),
        .ASCENDING(ASCENDING)
    )
    s0 
    (
        .clk(clk),
        .rst(rst),
        .x_valid(intm_valid),
        .x(intm),
    
        .y(y),
        
        .y_valid(y_valid)
    );
end else if (LOG_INPUT == 1) begin
    cae1 #
    (
        .DATA_WIDTH(DATA_WIDTH),
        .ASCENDING(ASCENDING)
    )
    cae2 
    (
        .clk(clk),
        .rst(rst),
        .x_valid(x_valid),
        .x1(x[DATA_WIDTH-1:0]),
        .x2(x[DATA_WIDTH*2-1:DATA_WIDTH]),
        .y1(y[DATA_WIDTH-1:0]),
        .y2(y[DATA_WIDTH*2-1:DATA_WIDTH]),
        .y_valid(y_valid)
    );
end


endmodule

