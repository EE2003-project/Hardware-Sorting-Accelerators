`timescale 1ns / 1ps

module sort_stage #
(
    parameter DATA_WIDTH = 4,
    parameter LOG_INPUT = 3,
    parameter ASCENDING = 1,
    parameter STAGE_INDEX = 0
)
(
    input clk,rst,
    input x_valid,
    input last_stage,
    input [0:DATA_WIDTH*(2**LOG_INPUT)-1] d_in,
    output [0:DATA_WIDTH*(2**LOG_INPUT)-1] d_out,
    output  y_valid                                     //[0:2**(LOG_INPUT-STAGE_INDEX-1)-1]
);
    
    
genvar n;
    
generate
    for(n=0;n<2**(LOG_INPUT-STAGE_INDEX-1);n=n+1)begin
        localparam NUM_BM_CHANN = STAGE_INDEX+1;
        
        //if(n==0) begin
        //    assign y_valid = validp;
        //end
        
        //assign y_valid[n] = n ? 0 : validp[NUM_BM_CHANN-1] ;
        
        wire [0:DATA_WIDTH*(2**NUM_BM_CHANN)-1] inp ;
        wire [0:DATA_WIDTH*(2**NUM_BM_CHANN)-1] outp ;
        //wire [0:NUM_BM_CHANN] validp;
        
        wire order;
        
        assign inp = d_in[n*(2**NUM_BM_CHANN)*DATA_WIDTH:(n+1)*(2**NUM_BM_CHANN)*DATA_WIDTH-1];
        assign d_out[n*(2**NUM_BM_CHANN)*DATA_WIDTH:(n+1)*(2**NUM_BM_CHANN)*DATA_WIDTH-1] = outp;
        
        assign order = n%2 ? ASCENDING : !ASCENDING ; 
        
        bm #(
            .DATA_WIDTH(DATA_WIDTH),
            .NUM_BM_CHANN(NUM_BM_CHANN)
        )bm_i(
            .clk(clk),
            .rst(rst),
            .x_valid(x_valid),
            .last_stage(last_stage),
            .ASCENDING(order),
            .c_in(inp),
            .c_out(outp),
            .y_valid(y_valid)
        );
    end
endgenerate
    
endmodule
