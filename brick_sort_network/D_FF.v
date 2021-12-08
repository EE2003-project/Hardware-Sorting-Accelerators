

module D_FF #
(
    parameter LOG_INPUT_NUM = 4, // Eg: If LOG_INPUT_NUM=4, then input number is 2**4=16 
    parameter DATA_WIDTH = 32,
    parameter SIGNED = 0,
    parameter ASCENDING = 1
)
(
    input clk,
    input rst,
    input [2**(LOG_INPUT_NUM)*DATA_WIDTH-1:0] x,
    input [2**(LOG_INPUT_NUM)*DATA_WIDTH-1:0] din,
    output reg [2**(LOG_INPUT_NUM)*DATA_WIDTH-1:0] q,
    output reg q_valid,
    output reg [31:0] counter

);

always @(posedge clk)
begin
    if(rst)begin
        q <= x;
        q_valid <= 0;
        counter <= 0;
    end
    else begin
        q <= din;
        counter <= counter +1;
        if(counter == 2**LOG_INPUT_NUM)begin
            q_valid <= 1;
        end
    end
end 
    
endmodule