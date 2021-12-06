

`timescale 1ns / 1ns
module input_2 #
(
    parameter DATA_WIDTH = 8,
    parameter SIGNED = 0,
    parameter ASCENDING = 1
)
(
    input clk, rst, x_valid,
    input [DATA_WIDTH-1 : 0] x_0, x_1,
    output reg [DATA_WIDTH-1 : 0] y_0, y_1,
    output reg y_valid
);

always @ (posedge clk)
begin
    if (rst == 1'b1) begin
        y_0 <= 0;
        y_1 <= 0;
        y_valid <= 0;
    end else begin
        y_valid <= x_valid;
        if (SIGNED == 0) begin
            if (ASCENDING == 1) begin
                if ($unsigned(x_0) < $unsigned(x_1)) begin
                    y_0 <= x_0;
                    
                    y_1 <= x_1;
                    
                end else begin
                    y_0 <= x_1;
                    
                    y_1 <= x_0;
                    
                end
            end else if (ASCENDING == 0) begin
                if ($unsigned(x_0) > $unsigned(x_1)) begin
                    y_0 <= x_0;
                  
                    y_1 <= x_1;
                   
                end else begin
                    y_0 <= x_1;
                   
                    y_1 <= x_0;
                  
                end
            end
        end else if (SIGNED == 1) begin
            if (ASCENDING == 1) begin
                if ($signed(x_0) < $signed(x_1)) begin
                    y_0 <= x_0;
                   
                    y_1 <= x_1;
                 
                end else begin
                    y_0 <= x_1;
                   
                    y_1 <= x_0;
                   
                end
            end else if (ASCENDING == 0) begin
                if ($signed(x_0) > $signed(x_1)) begin
                    y_0 <= x_0;
                   
                    y_1 <= x_1;
                  
                end else begin
                    y_0 <= x_1;
                   
                    y_1 <= x_0;
                 
                end
            end
        end
    end
end

endmodule
