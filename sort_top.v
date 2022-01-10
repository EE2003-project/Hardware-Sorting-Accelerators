//file for interfacing with all three sorting networks
module sort_top #
(
    parameter LOG_INPUT_NUM = 8, // Eg: If LOG_INPUT_NUM=4, then input number is 2**4=16 
    parameter ALGORITHM = 2,
    parameter DATA_WIDTH = 32,
    parameter SIGNED = 0,
    parameter ASCENDING = 1
)
(
    input clk,
    input rst,
    input [DATA_WIDTH-1:0] din,
    input now1,
    input now2,
    output y_valid,
    output reg [DATA_WIDTH-1:0] dout
);
// to detect change in now1, now2
reg prev1,prev2;
wire x_valid;
// to find port number
reg [DATA_WIDTH-1:0] cnt1,cnt2;
reg [DATA_WIDTH-1:0] x1[0:(2**LOG_INPUT_NUM)-1];
wire [DATA_WIDTH-1:0] y1[0:(2**LOG_INPUT_NUM)-1];
wire [DATA_WIDTH*(2**LOG_INPUT_NUM)-1:0] x;
wire [DATA_WIDTH*(2**LOG_INPUT_NUM)-1:0] y;
assign x_valid=1;
always @(posedge clk) begin
    if(rst)begin
        prev1 <= now1;
        prev2 <= now2;
        cnt1 <= 0;
        cnt2 <= 0;
    end
    else begin
        if(prev1!=now1)begin
            prev1 <= now1;
            cnt1 <= cnt1+1;
            x1[cnt1] <= din;
        end
        else if(prev2!=now2)begin
            prev2 <= now2;
            cnt2 <= cnt2+1;
            dout <= y1[cnt2];
        end
    end
end
genvar j;
for (j=0;j<2**LOG_INPUT_NUM;j=j+1) begin
    assign x[32*(j+1)-1:32*j] = x1[j];
    assign y1[j] = y[32*(j+1)-1:32*j];
end
if(ALGORITHM == 1)begin
    brick_sort_top #
    (
        .LOG_INPUT_NUM(LOG_INPUT_NUM),
        .DATA_WIDTH(DATA_WIDTH),
        //.SIGNED(SIGNED),
        .ASCENDING(ASCENDING)
    )
    M(
        .clk(clk),
        .rst(rst),
        .x_valid(x_valid),
        .x(x),
        .y(y),
        .y_valid(y_valid)
    );
end
else if(ALGORITHM == 2)begin
    bitonic_recursive_top #
    (
        .LOG_INPUT(LOG_INPUT_NUM),
        .DATA_WIDTH(DATA_WIDTH),
		//.SIGNED(SIGNED),
        .ASCENDING(ASCENDING)
    )
    M(
        .clk(clk),
        .rst(rst),
		.x_valid(x_valid),
        .x(x),
        .y(y),
		.y_valid(y_valid)
    );
end
else begin
    bitonic_sort_top #
    (
        .LOG_INPUT(LOG_INPUT_NUM),
        .DATA_WIDTH(DATA_WIDTH),
        //.SIGNED(SIGNED),
        .ASCENDING(ASCENDING)
    )
    M(
        .clk(clk),
        .rst(rst),
        .x_valid(x_valid),
        .x(x),
        .y(y),
        .y_valid(y_valid)
    );
end

endmodule
    