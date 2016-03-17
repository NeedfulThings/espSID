`timescale 1ns / 1ps

module top_test;

	// Inputs
	reg clk;
	reg rst;

	// Outputs
	wire led_d1;
	wire led_d2;
    wire sid_clk;

	// Instantiate the Unit Under Test (UUT)
	espSID_top uut (
		.clk(clk), 
		.rst(rst), 
		.led_d1(led_d1), 
		.led_d2(led_d2),
        .sid_clk(sid_clk)
	);

    // Create a clock input signal 
    always #5 clk = ~clk;

	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 0;

	end
      
endmodule

