module sid_glue(
    input clk,
    input rst,
    input sid_clk,
    input data_rdy,
    input [7:0] ram_out,
    output reg [4:0] addr,
    output reg sid_cs,
    output reg sid_rst,
    output sid_rw
    );

    assign sid_rw = sid_cs;

    reg sid_clk_q = 1'b0;
    reg running = 1'b0;
    reg [4:0] reg_cnt = 5'b0;
    reg [7:0] last_frame [24:0];
    
    wire sid_posedge = ({sid_clk_q, sid_clk} == 2'b01);
    wire sid_negedge = ({sid_clk_q, sid_clk} == 2'b10);
    
    integer i;
    initial begin
        for (i = 0; i < 25; i = i+1) // initialize last frame compare register 
            last_frame[i] <= 8'b0;
    end

    always @(posedge clk) begin
        
        if (rst) begin
            running <= 1'b0;
            reg_cnt <= 5'b0;
            sid_clk_q <= 1'b0;
            sid_cs <= 1'b1;
            sid_rst <= 1'b0;            
        end 
        else begin
            sid_clk_q <= sid_clk;
            addr <= reg_cnt;    // set address of register to put on bus
            if (data_rdy) running <= 1'b1; // fix this ...latch?
            if (~running) begin
                reg_cnt <= 1'b0; 
                sid_rst <= 1'b1;
            end
            else begin
                if (sid_posedge) begin
                    sid_cs <= (ram_out == last_frame[reg_cnt]) ? 1'b1 : 1'b0; // enable write only if register has changed
                    last_frame[reg_cnt] <= ram_out; // save last register for compare
                end
                else if (sid_negedge) begin
                    sid_cs <= 1'b1;     // disable write
                    if (addr == 24) running <= 1'b0;    // turn off if all registers are updated
                    else reg_cnt <= reg_cnt + 1'd1;
                end        
            end
        end    
    end

endmodule
