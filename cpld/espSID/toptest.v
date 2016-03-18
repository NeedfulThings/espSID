`timescale 1ns / 1ps

module toptest;

	// Inputs
	reg clk;
	reg rst;
	reg ss;
	reg sclk;
	reg mosi;

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
		.sid_clk(sid_clk), 
		.ss(ss), 
		.sclk(sclk), 
		.mosi(mosi)
	);

    integer i, x;

    always #5 clk = ~clk;
    
    always @(posedge clk) begin
        $display($time, ": sid_ram %b, addr %b, data_in %b, ram_out %b, en %b", uut.ram.sid_ram, uut.ram.write_addr, uut.ram.ram_in, uut.ram.ram_out, uut.ram.write_en);
        $display($time, ": tmp %b, bit_cnt %d, write_en %b, addr %b, data %b, ss %b", uut.spi.tmp, uut.spi.bit_cnt, uut.spi.write_en, uut.spi.addr, uut.spi.data, uut.spi.ss);
    end
    
	initial begin
		clk = 0;
		rst = 0;
		ss = 1;
		sclk = 0;
		mosi = 0;
        
        // simulate 200 incoming SPI bits (alternating 010101...)
        
        #5
        ss <= 0;
        
        for (i = 0; i < 200; i = i+1) begin
            #25
            sclk <= 1;
            #25
            sclk <= 0;
            mosi = ~mosi;
        end

        #5
        ss <= 1;

        // simulate 200 incoming SPI bits (alternating 0000000011111111...)

        #5
        ss <= 0;

        for (x = 0; x < 25; x = x+1) begin
            mosi = ~mosi;
            for (i = 0; i < 8; i = i+1) begin
                #25
                sclk <= 1;
                #25
                sclk <= 0;
            end
        end

        #5
        ss <= 1;

        
	end
      
endmodule

