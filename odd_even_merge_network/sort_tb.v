`timescale 1ns/1ns
`include "odd_even_merge_top.v"
`include "odd_even_merge_recursion_submodule.v"
`include "odd_even_merge_recursion.v"
`include "cae.v"

module sort_tb ();
    
    parameter LOG_INPUT = 3;   // change size of array here
    parameter DATA_WIDTH = 4;      // change data width here
   
    parameter SIGNED = 0;
    parameter ASCENDING = 1;
    reg  clk, rst, x_valid;
    //reg [DATA_WIDTH*(2**LOG_INPUT)-1 : 0] x;
    //wire [DATA_WIDTH*(2**LOG_INPUT)-1 : 0] y;
    reg [DATA_WIDTH-1:0] x[0:(2**LOG_INPUT)-1];
    wire [DATA_WIDTH-1:0] y[0:(2**LOG_INPUT)-1];
    wire y_valid;
    integer j;
    initial begin
        $dumpfile("test.vcd");
        $dumpvars;
        for (j = 0; j < 8; j = j + 1) begin
            $dumpvars(1,x[j]);
            $dumpvars(1,y[j]);
        end

    end
    initial begin
        clk=0;
        x_valid=1;
    end
    always #10 clk=~clk;
    initial #20 rst=1;
    initial #40 rst=0;
    initial begin
        #40 {x[7],x[6],x[5],x[4],x[3],x[2],x[1],x[0]}={4'd5,4'd1,4'd3,4'd2,4'd10,4'd8,4'd6,4'd2};
    end // provide input numbers here
    //initial #10 x={4'd5,4'd1,4'd2,4'd3, 4'd6, 4'd7, 4'd2, 4'd1};
    odd_even_merge_top #(
    .LOG_INPUT(LOG_INPUT),
    .DATA_WIDTH(DATA_WIDTH),
    
    .SIGNED(SIGNED),
    .ASCENDING(ASCENDING)
    )
    UUT (
    .clk(clk),
    .rst(rst),
    .x_valid(x_valid),
    .x({x[7],x[6],x[5],x[4],x[3],x[2],x[1],x[0]}),
    .y({y[7],y[6],y[5],y[4],y[3],y[2],y[1],y[0]}),
    //.x(x),
    //.y(y),
    .y_valid(y_valid)
    );
    initial #600 $finish;
    
endmodule