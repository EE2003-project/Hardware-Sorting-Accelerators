`timescale 1ns / 1ns
module merge #
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
    genvar i;


    for ( i = 0; i < (2**(LOG_INPUT-1)); i = i + 1) begin 
        cae1 #
        (
            .DATA_WIDTH(DATA_WIDTH),
            .ASCENDING(ASCENDING)
        )
        cae_i
        (
            .clk(clk),
            .rst(rst),
            .x_valid(x_valid),
            .x1(x[DATA_WIDTH*(i+1)-1:DATA_WIDTH*i]),
            .x2(x[DATA_WIDTH*(i+1+(2**(LOG_INPUT-1)))-1:DATA_WIDTH*(i+(2**(LOG_INPUT-1)))]),
           
            .y1(intm[DATA_WIDTH*(i+1)-1:DATA_WIDTH*i]),
            .y2(intm[DATA_WIDTH*(i+1+(2**(LOG_INPUT-1)))-1:DATA_WIDTH*(i+(2**(LOG_INPUT-1)))]),
           
            .y_valid(intm_valid)
        );
    end


    merge #
    (
        .LOG_INPUT(LOG_INPUT-1),
        .DATA_WIDTH(DATA_WIDTH),
        .ASCENDING(ASCENDING)
    )
    s1
    (
        .clk(clk),
        .rst(rst),
        .x_valid(intm_valid),
        .x(intm[DATA_WIDTH*(2**(LOG_INPUT-1))-1:0]),
       
        .y(y[DATA_WIDTH*(2**(LOG_INPUT-1))-1:0]),
      
        .y_valid(y_valid)
    );

    merge #
    (
        .LOG_INPUT(LOG_INPUT-1),
        .DATA_WIDTH(DATA_WIDTH),
        .ASCENDING(ASCENDING)
    )
    s2
    (
        .clk(clk),
        .rst(rst),
        .x_valid(intm_valid),
        .x(intm[DATA_WIDTH*(2**LOG_INPUT)-1:DATA_WIDTH*(2**(LOG_INPUT-1))]),
        
        .y(y[DATA_WIDTH*(2**LOG_INPUT)-1:DATA_WIDTH*(2**(LOG_INPUT-1))]),
      
        .y_valid()
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
