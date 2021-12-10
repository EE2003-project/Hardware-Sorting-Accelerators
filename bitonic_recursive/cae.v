//Comparator and Exchange unit implementation

module cae1 #
(
    parameter DATA_WIDTH = 4,
    parameter ASCENDING =1
)
(
    input clk, rst,x_valid,
    input [DATA_WIDTH-1 : 0] x1, x2,
    output reg [DATA_WIDTH-1 : 0] y1, y2,
    output reg y_valid
);

always @(posedge clk)
begin
    if(rst == 1'b1) begin
        y1 <= 0;
        y2 <= 0;
        y_valid <=1'b0;
    end else begin
        if(ASCENDING == 1) begin
            if ($unsigned(x1) < $unsigned(x2)) begin
                y1 <= x1;
                y2 <= x2;
                y_valid <= x_valid;
            end else begin
                y1 <= x2;
                y2 <= x1;
                y_valid <= x_valid;
            end

        end else if(ASCENDING == 0) begin
            if ($unsigned(x1) < $unsigned(x2)) begin
                y1 <= x2;
                y2 <= x1;
                y_valid <= x_valid;
            end else begin
                y1 <= x1;
                y2 <= x2;
                y_valid <= x_valid;
            end
        end        
    end
end
    
endmodule