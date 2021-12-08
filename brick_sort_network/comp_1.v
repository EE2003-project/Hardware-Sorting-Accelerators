module comp_1 #
(
    parameter LOG_INPUT_NUM = 4,
    parameter DATA_WIDTH = 32,
    parameter SIGNED = 0,
    parameter ASCENDING = 1
)
(
    input [2**(LOG_INPUT_NUM)*DATA_WIDTH-1:0] q,
    output [2**(LOG_INPUT_NUM)*DATA_WIDTH-1:0] din
);
assign din[DATA_WIDTH-1:0]=q[DATA_WIDTH-1:0];
assign din[2**(LOG_INPUT_NUM)*DATA_WIDTH-1:(2**(LOG_INPUT_NUM)-1)*DATA_WIDTH]=q[2**(LOG_INPUT_NUM)*DATA_WIDTH-1:(2**(LOG_INPUT_NUM)-1)*DATA_WIDTH];
genvar i;
for(i=0;i<2**(LOG_INPUT_NUM-1)-1;i=i+1)begin	
    cae_comb #
    (
        .LOG_INPUT_NUM(LOG_INPUT_NUM),
        .SIGNED(SIGNED),
        .DATA_WIDTH(DATA_WIDTH),
        .ASCENDING(ASCENDING)
    )
    M_i
    (
        .x_0(q[(2*i+2)*DATA_WIDTH-1:(2*i+1)*DATA_WIDTH]),
        .x_1(q[(2*i+3)*DATA_WIDTH-1:(2*i+2)*DATA_WIDTH]),
        .y_0(din[(2*i+2)*DATA_WIDTH-1:(2*i+1)*DATA_WIDTH]),
        .y_1(din[(2*i+3)*DATA_WIDTH-1:(2*i+2)*DATA_WIDTH])
    );
end
endmodule