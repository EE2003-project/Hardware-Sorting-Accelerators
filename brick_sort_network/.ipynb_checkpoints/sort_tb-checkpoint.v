`timescale 1ns/1ns
`include "brick_sorting_top.v"
`include "D_FF.v"
`include "comp_block.v"
`include "comp_0.v"
`include "comp_1.v"
`include "cae.v"

module sort_tb ();
    
    parameter LOG_INPUT_NUM = 5;   // change size of array here
    parameter DATA_WIDTH = 32;     
    parameter SIGNED = 0;
    parameter ASCENDING = 1;
    
    reg  clk, rst, x_valid;
    wire y_valid;
    reg [DATA_WIDTH-1:0] x_1[0:(2**LOG_INPUT_NUM)-1];
    wire [DATA_WIDTH*(2**LOG_INPUT_NUM)-1 : 0] x;
    wire [DATA_WIDTH*(2**LOG_INPUT_NUM)-1 : 0] y;
    wire [DATA_WIDTH-1:0] y_1[0:(2**LOG_INPUT_NUM)-1];

    integer j;
    initial begin
        clk=0;
        x_valid=1;
        $readmemh("sort.mem", x_1);
        $dumpfile("test.vcd");
        $dumpvars;
        for (j = 0; j < 2**(LOG_INPUT_NUM); j = j + 1) begin
            $dumpvars(1,x_1[j]);
            $dumpvars(1,y_1[j]);
        end
	end

    genvar i;
    for(i=0;i<2**(LOG_INPUT_NUM);i=i+1) begin
        assign x[32*(i+1)-1:32*i]=x_1[i];
        assign y_1[i]=y[32*(i+1)-1:32*i];
    end

    always #10 clk=~clk;
    initial #20 rst=1;
    initial #40 rst=0;

    brick_sort_top #(
    .LOG_INPUT_NUM(LOG_INPUT_NUM),
    .DATA_WIDTH(DATA_WIDTH),
    .SIGNED(SIGNED),
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