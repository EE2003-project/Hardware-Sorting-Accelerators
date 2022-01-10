

module brick_sort_top #
(
    parameter LOG_INPUT_NUM = 4, // Eg: If LOG_INPUT_NUM=4, then input number is 2**4=16 
    parameter DATA_WIDTH = 32,
    parameter SIGNED = 0,
    parameter ASCENDING = 1

)
(
    input clk,
    input rst,
    input x_valid,
    input [DATA_WIDTH*(2**LOG_INPUT_NUM)-1 : 0] x,
    output [DATA_WIDTH*(2**LOG_INPUT_NUM)-1 : 0] y,
    output y_valid
);

wire [2**(LOG_INPUT_NUM)*DATA_WIDTH-1:0] din;
wire [2**(LOG_INPUT_NUM)*DATA_WIDTH-1:0] q;
wire q_valid;
wire [31:0] counter;
D_FF #
(
    .LOG_INPUT_NUM(LOG_INPUT_NUM),
    .DATA_WIDTH(DATA_WIDTH),
    .SIGNED(SIGNED),
    .ASCENDING(ASCENDING)
)
M
(
    .clk(clk),
    .rst(rst),
    .x(x),
    .din(din),
    .q(q),
    .q_valid(q_valid),
    .counter(counter)
);
comp_block #
(
    .LOG_INPUT_NUM(LOG_INPUT_NUM),
    .DATA_WIDTH(DATA_WIDTH),
    .ASCENDING(ASCENDING),
    .SIGNED(SIGNED)
)
C
(
    
    .q(q),
    .counter(counter),
    .din(din)
);
assign y=q;
assign y_valid=q_valid;
endmodule