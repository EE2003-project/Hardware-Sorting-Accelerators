`timescale 1ns / 1ps

module bitonic_sort_top #
(
    parameter DATA_WIDTH = 4,
    parameter LOG_INPUT = 5,
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
//assign validity = {x_valid,{LOG_INPUT{1b'0}}};
assign validity[0] = x_valid;
assign y_valid = validity[LOG_INPUT];


//wire valid_last_stage[0:LOG_INPUT-1];
    
assign intm_wires[0] = x;
assign y = intm_wires[LOG_INPUT];
//assign y_valid = valid_last_stage[LOG_INPUT-1];
    
genvar p;
    
generate
    for(p=0;p<LOG_INPUT;p=p+1)begin
        
        localparam STAGE_INDEX = p;
        
        //assign valid_last_stage[p] = LOG_INPUT-STAGE_INDEX-1 ? 0 : vls[0];
        
        //if(STAGE_INDEX == ) begin
        //    assign last_stage = 1'b1;
        //end else begin
        //    assign last_stage = 1'b0;
        //end
        
        assign x_valid_stage = validity[p];
        assign validity[p+1] =  vls;
        
        //assign last_stage = LOG_INPUT-STAGE_INDEX-1 ? 1'b0 : 1'b1 ;
        
        wire [0:DATA_WIDTH*(2**LOG_INPUT)-1] in ;
        wire [0:DATA_WIDTH*(2**LOG_INPUT)-1] out ;
        //wire [0:2**(LOG_INPUT-STAGE_INDEX-1)-1] vls;
        wire vls;
        //wire x_valid_stage;
        
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
            .last_stage(last_stage),
            .d_in(in),
            .d_out(out),
            .y_valid(vls)
        );
    end
endgenerate
    
endmodule


        
        