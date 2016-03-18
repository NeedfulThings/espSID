module spitest;

	// Inputs
	reg clk;
	reg ss;
	reg sclk;
	reg mosi;

	// Outputs
	wire [4:0] addr;
	wire [7:0] data;
	wire write_en;
	wire data_rdy;

	// Instantiate the Unit Under Test (UUT)
	spi_slave uut (
		.clk(clk), 
		.ss(ss), 
		.sclk(sclk), 
		.mosi(mosi), 
		.addr(addr), 
		.data(data), 
		.write_en(write_en), 
		.data_rdy(data_rdy)
	);

	always 
        #5 clk = ~clk;
        
    always
        #12.5 sclk = ~sclk; 
        
    initial begin
		// Initialize Inputs
		clk = 0;
		ss = 0;
		sclk = 0;
		mosi = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

