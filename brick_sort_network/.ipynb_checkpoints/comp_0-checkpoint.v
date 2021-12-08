module comp_0 #
(
    parameter LOG_INPUT_NUM = 4,
    parameter DATA_WIDTH = 32,
    parameter SIGNED = 0,
    parameter ASCENDING = 1
)
(
    input [DATA_WIDTH*(2**(LOG_INPUT_NUM))-1:0] q,
    output [DATA_WIDTH*(2**(LOG_INPUT_NUM))-1:0] din
);
genvar i;
for(i=0;i<2**(LOG_INPUT_NUM-1);i=i+1)begin	
    cae_comb #
    (
        .LOG_INPUT_NUM(LOG_INPUT_NUM),
        .SIGNED(SIGNED),
        .DATA_WIDTH(DATA_WIDTH),
        .ASCENDING(ASCENDING)
    )
    M_i
    (
        .x_0(q[(2*i+1)*DATA_WIDTH-1:2*i*DATA_WIDTH]),
        .x_1(q[(2*i+2)*DATA_WIDTH-1:(2*i+1)*DATA_WIDTH]),
        .y_0(din[(2*i+1)*DATA_WIDTH-1:2*i*DATA_WIDTH]),
        .y_1(din[(2*i+2)*DATA_WIDTH-1:(2*i+1)*DATA_WIDTH])
    );
end
endmodule