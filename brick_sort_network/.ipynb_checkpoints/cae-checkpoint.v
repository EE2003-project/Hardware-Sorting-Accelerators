`timescale 1ns / 1ns
module cae_comb #
(
    parameter LOG_INPUT_NUM = 4,
    parameter DATA_WIDTH = 8,
    parameter SIGNED = 0,
    parameter ASCENDING = 1
)
(
    
    input  [DATA_WIDTH-1 : 0] x_0,
    input  [DATA_WIDTH-1 : 0] x_1,
    output reg [DATA_WIDTH-1 : 0] y_0, 
    output reg [DATA_WIDTH-1 : 0] y_1
);
always@(*)begin
    if($unsigned(x_0)>$unsigned(x_1))begin
        y_1 <= x_0;
        y_0 <= x_1;
    end
    else begin
        y_0 <= x_0;
        y_1 <= x_1;
    end
end


endmodule
