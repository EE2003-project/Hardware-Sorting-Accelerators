

module comp_block #
(
    parameter LOG_INPUT_NUM = 4,
    parameter DATA_WIDTH = 32,
    parameter SIGNED = 0,
    parameter ASCENDING = 1
)
(
    
    input [(2**(LOG_INPUT_NUM))*DATA_WIDTH-1:0] q,
    input [31:0] counter,
    output reg [(2**(LOG_INPUT_NUM))*DATA_WIDTH-1:0] din
);
wire cnt;
wire [(2**(LOG_INPUT_NUM))*DATA_WIDTH-1:0] din_0;
wire [(2**(LOG_INPUT_NUM))*DATA_WIDTH-1:0] din_1;
assign cnt=counter[0:0];
comp_0 #
(
    .LOG_INPUT_NUM(LOG_INPUT_NUM),
    .SIGNED(SIGNED),
    .DATA_WIDTH(DATA_WIDTH),
    .ASCENDING(ASCENDING)
)
C0
(
    .q(q),
    .din(din_0)   
);
comp_1 #
(
    .LOG_INPUT_NUM(LOG_INPUT_NUM),
    .SIGNED(SIGNED),
    .DATA_WIDTH(DATA_WIDTH),
    .ASCENDING(ASCENDING)
)
C1
(
    .q(q),
    .din(din_1)
);
always@(*)begin
    if(!cnt)begin
        din <= din_0;
    end
    else begin
        din <= din_1;
    end
end

/*always@(*)begin
    if(!cnt)begin
        comp_0 #
        (
            .LOG_INPUT_NUM(LOG_INPUT_NUM),
            .SIGNED(SIGNED),
            .DATA_WIDTH(DATA_WIDTH),
            .ASCENDING(ASCENDING)
        )
        C0
        (
        
            .q(q),
            .din(din)   
        );
    end
    else begin
        
    end
end
//if(!cnt)begin
    
//end
//else begin
    
//end

/*genvar i;
//if(!(counter&1))begin
for(i=0;i<2**(LOG_INPUT_NUM-1);i=i+1)begin	
    cae #
    (
        .LOG_INPUT_NUM(LOG_INPUT_NUM),
        .SIGNED(SIGNED),
        .DATA_WIDTH(DATA_WIDTH),
        .ASCENDING(ASCENDING)
    )
    M_i
    (
        .x_0(q[DATA_WIDTH*(2*i+1)-1:DATA_WIDTH*i*2]),
        .x_1(q[DATA_WIDTH*(2*i+2)-1:DATA_WIDTH*(2*i+1)]),
        .y_0(din[DATA_WIDTH*(2*i+1)-1:DATA_WIDTH*(2*i)]),
        .y_1(din[DATA_WIDTH*(2*i+2)-1:DATA_WIDTH*(2*i+1)])
    );
end
//end
/*else begin
    for(i=0;i<2**(LOG_INPUT_NUM-1)-1;i=i+1)begin	
        cae #
        (
            .DATA_WIDTH(DATA_WIDTH),
            .ASCENDING(ASCENDING)
        )
        M_i
        (
            .x1(q[(2*i+2)*DATA_WIDTH-1:(2*i+1)*DATA_WIDTH]),
            .x2(q[(2*i+3)*DATA_WIDTH-1:(2*i+2)*DATA_WIDTH]),
            .y1(din[(2*i+2)*DATA_WIDTH-1:(2*i+1)*DATA_WIDTH]),
            .y2(din[(2*i+3)*DATA_WIDTH-1:(2*i+2)*DATA_WIDTH])
        );
    end
end*/
endmodule