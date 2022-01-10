`timescale 1ns / 1ps

module bm #
(
    parameter DATA_WIDTH = 4,
    parameter NUM_BM_CHANN = 1
)
(
    input clk,rst,x_valid,last_stage,ASCENDING,
    input [0:DATA_WIDTH*(2**NUM_BM_CHANN)-1] c_in,
    output [0:DATA_WIDTH*(2**NUM_BM_CHANN)-1] c_out,
    output  y_valid                                             //[0:NUM_BM_CHANN]
);
    
    
wire [0:DATA_WIDTH*(2**NUM_BM_CHANN)-1] int_wires[0:NUM_BM_CHANN];
    
//wire [0:NUM_BM_CHANN] x_validity;
wire validity[0:NUM_BM_CHANN];

assign validity[0] = x_valid;
assign y_valid = validity[NUM_BM_CHANN];

    
assign int_wires[0] = c_in;
assign c_out = int_wires[NUM_BM_CHANN];

//assign y_valid[NUM_BM_CHANN]=0;
    
genvar j;
    
generate
    for(j=0;j<NUM_BM_CHANN;j=j+1)begin
        
        localparam INDEX = j;
        
        //if(j==NUM_BM_CHANN-1) begin
        //    assign y_valid = valid;
        //end
        
//        if(j == NUM_BM_CHANN-1 && last_stage == 1) begin
//           assign last_stage_chann = 1'b1;
//        end else begin
//            assign last_stage_chann = 1'b0;
//        end
        
        //assign y_valid[j] = NUM_BM_CHANN-INDEX-1 ? 0 : valid[0] ; 
        
        wire [0:DATA_WIDTH*(2**NUM_BM_CHANN)-1] in;
        wire [0:DATA_WIDTH*(2**NUM_BM_CHANN)-1] out;
        //wire [0:2**(INDEX)]valid; 
        //wire last_stage_chann;
        wire x_valid_ch;
        wire y_valid_ch;
        
        assign x_valid_ch = validity[j];
        assign validity[j+1] = y_valid_ch;
        
        assign in = int_wires[j];
        assign int_wires[j+1] = out;
        
        bm_chann #(
            .DATA_WIDTH(DATA_WIDTH),
            .NUM_BM_CHANN(NUM_BM_CHANN),
            .CHANN_INDEX(INDEX)
        )bm_chann_i(
            .clk(clk),
            .rst(rst),
            .x_valid(x_valid_ch),
            .last_stage_chann(last_stage),
            .ASCENDING(ASCENDING),
            .b_in(in),
            .b_out(out),
            .y_valid(y_valid_ch)
        );
    end
endgenerate
    
endmodule

        
        
        
        