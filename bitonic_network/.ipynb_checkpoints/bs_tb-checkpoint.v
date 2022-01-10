`timescale 1ns/1ps
`include "sort.v"
`include "sort_stage.v"
`include "bm.v"
`include "bm_chann.v"
`include "bm_chann_unit.v"
`include "cae.v"

module sort_tb ();
    
    parameter LOG_INPUT = 3;   // change size of array here(2**(LOG_INPUT) entries)
    parameter DATA_WIDTH = 4;      // change data width here
   
    parameter ASCENDING = 0;
    reg  clk, rst, x_valid;
    reg [DATA_WIDTH*(2**LOG_INPUT)-1 : 0] x;
    wire [DATA_WIDTH*(2**LOG_INPUT)-1 : 0] y;
    wire y_valid;
    initial begin
        $dumpfile("test.vcd");   // for waveform-analysis
        $dumpvars;
    end
    initial begin
        clk=0;
    end
    always #10 clk=~clk;
    initial #20 rst=1;
    initial #40 rst=0;
    initial #40 x={4'd5,4'd1,4'd2,4'd3, 4'd6, 4'd7, 4'd2, 4'd1}; // provide input numbers here
    initial #40 x_valid = 1;
    sort #(
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
    initial #1200 $finish;
    
endmodule