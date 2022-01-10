//merge-block channel unit
`timescale 1ns / 1ps

module bm_chann_unit#
(
    parameter DATA_WIDTH = 4,
    parameter BM_WIDTH = 1
)
(
    input clk, rst,x_valid,last_stage_chann,ASCENDING,
    input [0:DATA_WIDTH*BM_WIDTH*2-1] a_in,
    output [0:DATA_WIDTH*BM_WIDTH*2-1] a_out,
    output y_valid                                              
);    
    

genvar i;
    
generate
    for(i=0;i<BM_WIDTH;i=i+1) begin
        wire [DATA_WIDTH-1:0] x1;
        wire [DATA_WIDTH-1:0] x2;
        wire [DATA_WIDTH-1:0] y1;
        wire [DATA_WIDTH-1:0] y2;
        
        
        
        
        assign x1 = a_in[i*DATA_WIDTH:(i+1)*DATA_WIDTH-1];
        assign x2 = a_in[(i+BM_WIDTH)*DATA_WIDTH:(i+BM_WIDTH+1)*DATA_WIDTH-1];
        assign a_out[i*DATA_WIDTH:(i+1)*DATA_WIDTH-1] = y1;
        assign a_out[(i+BM_WIDTH)*DATA_WIDTH:(i+BM_WIDTH+1)*DATA_WIDTH-1] = y2 ;  
            
            
        cae #(
            .DATA_WIDTH(DATA_WIDTH)
        )cae_i(
            .clk(clk),
            .rst(rst),
            .x_valid(x_valid),
            .last_stage_chann(last_stage_chann),
            .ASCENDING(ASCENDING),
            .x1(x1),
            .x2(x2),
            .y1(y1),
            .y2(y2),
            .y_valid(y_valid)
        );            
    end
endgenerate

endmodule