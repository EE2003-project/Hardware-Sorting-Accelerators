`timescale 1ns / 1ps

module sort #
(
    parameter DATA_WIDTH = 4,
    parameter LOG_INPUT = 3,   
    parameter ASCENDING = 1
)
(
    input clk,rst,x_valid,
    input [0:DATA_WIDTH*(2**LOG_INPUT)-1] x,
    output [0:DATA_WIDTH*(2**LOG_INPUT)-1] y,
    output y_valid
);
    
wire [0:DATA_WIDTH*(2**LOG_INPUT)-1] intm_wires[0:LOG_INPUT];

wire validity[0:LOG_INPUT];

assign validity[0] = x_valid;
assign y_valid = validity[LOG_INPUT];


assign intm_wires[0] = x;
assign y = intm_wires[LOG_INPUT];

    
genvar p;
    
generate
    for(p=0;p<LOG_INPUT;p=p+1)begin
        
        localparam STAGE_INDEX = p;
        
        //assign last_stage = LOG_INPUT-STAGE_INDEX-1 ? 1'b0 : 1'b1 ;
        
        assign x_valid_stage = validity[p];
        assign validity[p+1] =  vls;
        
        
        wire [0:DATA_WIDTH*(2**LOG_INPUT)-1] in ;
        wire [0:DATA_WIDTH*(2**LOG_INPUT)-1] out ;
        
        wire vls;
        
        
        assign in = intm_wires[p];
        assign intm_wires[p+1] = out;
        
        sort_stage #(
            .DATA_WIDTH(DATA_WIDTH),
            .LOG_INPUT(LOG_INPUT),
            .ASCENDING(ASCENDING),
            .STAGE_INDEX(STAGE_INDEX)
        ) sort_stage_inst (
            .clk(clk),
            .rst(rst),
            .x_valid(x_valid_stage),
            .last_stage(last_stage),  //last_stage used for debugging
            .d_in(in),
            .d_out(out),
            .y_valid(vls)
        );
    end
endgenerate
    
endmodule


        
        