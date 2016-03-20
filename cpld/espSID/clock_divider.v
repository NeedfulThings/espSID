module clock_divider #(parameter SYS_CLK=20000000, CLK_OUT=1000000)(
	input clk,
    input rst,
    output reg sid_clk = 1'b0
    );        
	
	reg[3:0] clk_counter = 3'b0;
    
    always @(posedge clk) begin
        if (rst) begin
            sid_clk <= 1'b0;
        end else begin
		if (clk_counter == (SYS_CLK / (2*CLK_OUT))-1) begin
			clk_counter <= 0;
			sid_clk <= ~sid_clk;
        end
		else clk_counter <= clk_counter + 1'd1;
        end
	end	

endmodule