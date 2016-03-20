module sid_glue(
    input clk,
    input rst,
    input sid_clk,
    input data_rdy,
    input [7:0] ram_out,
    output reg [4:0] addr,
    output reg sid_cs,
    output reg sid_rst,
    output sid_rw,
    output led_d1
    );

    assign sid_rw = sid_cs;

    reg sid_clk_q = 1'b0;
    reg running = 1'b0;
    reg [4:0] reg_cnt = 4'b0;
    reg [7:0] last_frame [24:0];
    
    wire sid_posedge = ({sid_clk_q, sid_clk} == 2'b01);
    wire sid_negedge = ({sid_clk_q, sid_clk} == 2'b10);
    
    always @(posedge clk) begin
        
        if (rst) begin
            running <= 1'b0;
            reg_cnt <= 4'b0;
            sid_clk_q <= 1'b0;
            sid_cs <= 1'b1;
            sid_rst <= 1'b0; 
        end 
        else begin
            sid_clk_q <= sid_clk;
            if (data_rdy) running <= 1'b1; // fix this ...latch?
            if (~running) begin
                reg_cnt <= 1'b0; 
                sid_rst <= 1'b1;
            end
            else begin
                if (sid_posedge) begin
                    addr <= reg_cnt;    // set address to put on bus
                    sid_cs <= 1'b0;     // enable write
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
