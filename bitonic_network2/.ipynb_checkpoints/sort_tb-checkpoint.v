`timescale 1ns/1ps
`include "bitonic_sort.v"
`include "sort_stage.v"
`include "bm.v"
`include "bm_chann.v"
`include "bm_chann_unit.v"
`include "cae.v"

module sort_tb ();
    
    parameter LOG_INPUT = 5;   // change size of array here
    parameter DATA_WIDTH = 32;     
    parameter ASCENDING = 1;
    
    reg  clk, rst, x_valid;
    wire y_valid;
    reg [DATA_WIDTH-1:0] x_1[0:(2**LOG_INPUT)-1];
    wire [DATA_WIDTH*(2**LOG_INPUT)-1 : 0] x;
    wire [DATA_WIDTH*(2**LOG_INPUT)-1 : 0] y;
    wire [DATA_WIDTH-1:0] y_1[0:(2**LOG_INPUT)-1];

    integer j;
    initial begin
        clk=0;
        x_valid=1;
        $readmemh("sort.mem", x_1);
        $dumpfile("test.vcd");
        $dumpvars;
        for (j = 0;  j < 2**(LOG_INPUT); j = j + 1) begin
            $dumpvars(1,x_1[j]);
            $dumpvars(1,y_1[j]);
        end
	end

    genvar i;
    for(i=0;i<2**(LOG_INPUT);i=i+1) begin
        assign x[32*(i+1)-1:32*i]=x_1[i];
        assign y_1[i]=y[32*(i+1)-1:32*i];
    end

    always #10 clk=~clk;
    initial #20 rst=1;
    initial #40 rst=0;

    bitonic_sort_top #(
    .LOG_INPUT(LOG_INPUT),
    .DATA_WIDTH(DATA_WIDTH),
    .ASCENDING(ASCENDING)
    )
    UUT (
    .clk(clk),
    .rst(rst),
    .x_valid(x_valid),
    .x(x),    
    .y(y), 
    .y_valid(y_valid)
    );

    initial #10000 $finish;
    
endmodule
