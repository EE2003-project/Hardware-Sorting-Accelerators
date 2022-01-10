//merge-block channel
`timescale 1ns / 1ps

module bm_chann #
(
    parameter DATA_WIDTH = 4,
    parameter NUM_BM_CHANN = 1,
    parameter CHANN_INDEX = 0
)
(
    input clk,rst,x_valid,last_stage_chann,ASCENDING,
    input [0:DATA_WIDTH*(2**NUM_BM_CHANN)-1] b_in,
    output [0:DATA_WIDTH*(2**NUM_BM_CHANN)-1] b_out,
    output  y_valid                                             
);

   
genvar k;
    
generate
    for(k=0;k<2**(CHANN_INDEX);k=k+1)begin
        localparam WIDTH = 2**(NUM_BM_CHANN-CHANN_INDEX-1);
        

        
        wire [0:DATA_WIDTH*WIDTH*2-1] inp ;
        wire [0:DATA_WIDTH*WIDTH*2-1] outp ;
        wire [0:WIDTH] validp;
        
        assign inp = b_in[2*k*WIDTH*DATA_WIDTH:2*(k+1)*WIDTH*DATA_WIDTH-1];
        assign b_out[2*k*WIDTH*DATA_WIDTH:2*(k+1)*WIDTH*DATA_WIDTH-1] = outp;
        
        bm_chann_unit #(
            .DATA_WIDTH(DATA_WIDTH),
            .BM_WIDTH(WIDTH)
        )bm_chann_unit_i(
            .clk(clk),
            .rst(rst),
            .x_valid(x_valid),
            .last_stage_chann(last_stage_chann),
            .ASCENDING(ASCENDING),
            .a_in(inp),
            .a_out(outp),
            .y_valid(y_valid)
        );
    end
endgenerate

endmodule