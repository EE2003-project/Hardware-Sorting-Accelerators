`timescale 1ns / 1ns
module odd_even_merge_recursion_submodule #
(
    parameter LOG_INPUT = 4, 
    parameter DATA_WIDTH = 8,
   
    parameter SIGNED = 0,
    parameter ASCENDING = 1
)
(
    input clk, rst, x_valid,
    input [DATA_WIDTH*(2**LOG_INPUT)-1 : 0] x,
   
    output [DATA_WIDTH*(2**LOG_INPUT)-1 : 0] y,
   
    output y_valid
);
    


if (LOG_INPUT > 1) begin

    wire [DATA_WIDTH*(2**(LOG_INPUT-1))-1 : 0] din_1;
    wire [DATA_WIDTH*(2**(LOG_INPUT-1))-1 : 0] din_2;
    wire [DATA_WIDTH*(2**(LOG_INPUT-1))-1 : 0] dout_1;
    wire [DATA_WIDTH*(2**(LOG_INPUT-1))-1 : 0] dout_2;
    
    wire valid;

    genvar j;
    for(j=0;j<2**(LOG_INPUT-1);j=j+1)begin
        assign din_1[DATA_WIDTH*(j+1)-1:DATA_WIDTH*j]=x[DATA_WIDTH*(2*j+1)-1:DATA_WIDTH*2*j];
        assign din_2[DATA_WIDTH*(j+1)-1:DATA_WIDTH*j]=x[DATA_WIDTH*(2*j+2)-1:DATA_WIDTH*(2*j+1)];
    end
    
    
    
    odd_even_merge_recursion #
    (
        .LOG_INPUT(LOG_INPUT-1),
        .DATA_WIDTH(DATA_WIDTH),
        .SIGNED(SIGNED),
        .ASCENDING(ASCENDING)
    )
    inst_stage0_0 
    (
        .clk(clk),
        .rst(rst),
        .x_valid(valid),
        .x(din_1),
        .y(dout_1),
        .y_valid(y_valid)
    );

    odd_even_merge_recursion #
    (
        .LOG_INPUT(LOG_INPUT-1),
        .DATA_WIDTH(DATA_WIDTH),
        .SIGNED(SIGNED),
        .ASCENDING(ASCENDING)
    )
    inst_stage0_1 
    (
        .clk(clk),
        .rst(rst),
        .x_valid(x_valid),
        .x(din_2),
        .y(dout_2),
        .y_valid()
    );
    assign y[DATA_WIDTH-1:0]=dout_1[DATA_WIDTH-1:0];
    assign y[DATA_WIDTH*(2**LOG_INPUT)-1:DATA_WIDTH*(2**LOG_INPUT-1)]=dout_2[DATA_WIDTH*(2**(LOG_INPUT-1))-1:DATA_WIDTH*(2**(LOG_INPUT-1)-1)];
    genvar i;
    for(i=0;i<2**(LOG_INPUT-1)-1;i=i+1)begin
        cae1 #
        (
            .DATA_WIDTH(DATA_WIDTH),
            .SIGNED(SIGNED),
            .ASCENDING(ASCENDING)
        )
        cae_i
        (
            .clk(clk),
            .rst(rst),
            .x_valid(x_valid),
            .x_0(dout_2[DATA_WIDTH*(i+1)-1:DATA_WIDTH*i]),
            .x_1(dout_1[DATA_WIDTH*(i+2)-1:DATA_WIDTH*(i+1)]),
            .y_0(y[DATA_WIDTH*(2*i+2)-1:DATA_WIDTH*(2*i+1)]),
            .y_1(y[DATA_WIDTH*(2*i+3)-1:DATA_WIDTH*(2*i+2)]),
            .y_valid(valid)
        );
    end

end else if (LOG_INPUT_NUM == 1) begin
    cae1 #
    (
        .DATA_WIDTH(DATA_WIDTH),
        
        .SIGNED(SIGNED),
        .ASCENDING(ASCENDING)
    )
    cae_11 
    (
        .clk(clk),
        .rst(rst),
        .x_valid(x_valid),
        .x_0(x[DATA_WIDTH-1:0]),
        .x_1(x[DATA_WIDTH*2-1:DATA_WIDTH]),
        .y_0(y[DATA_WIDTH-1:0]),
        .y_1(y[DATA_WIDTH*2-1:DATA_WIDTH]),
        .y_valid(y_valid)
    );
end

endmodule
