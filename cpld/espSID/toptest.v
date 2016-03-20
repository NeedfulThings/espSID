`timescale 1ns / 1ps

module toptest;

	// Inputs
	reg clk;
	reg rst_n;
	reg ss;
	reg sclk;
	reg mosi;
    reg [7:0] sid_data;
    reg [4:0] sid_addr;
    reg sid_cs;

	// Outputs
	wire led_d1;
	wire led_d2;
	wire sid_clk;

	// Instantiate the Unit Under Test (UUT)
	espSID_top uut (
		.clk(clk), 
		.rst_n(rst_n), 
		.led_d1(led_d1), 
		.led_d2(led_d2), 
		.sid_clk(sid_clk), 
		.ss(ss), 
		.sclk(sclk), 
		.mosi(mosi),
        .sid_data(sid_data),
        .sid_addr(sid_addr),
        .sid_cs(sid_cs)
	);

    integer i, x;

    always #5 clk = ~clk;
    
    always @(posedge clk) begin
        $display($time, ": sid_ram %b, addr %b, data_in %b, ram_out %b, en %b", uut.ram.sid_ram, uut.ram.write_addr, uut.ram.ram_in, uut.ram.ram_out, uut.ram.write_en);
        
        $display($time, ": tmp %b, bit_cnt %d, write_en %b, addr %b, data %b, ss %b, data_rdy %b", uut.spi.tmp, uut.spi.bit_cnt, uut.spi.write_en, uut.spi.addr, uut.spi.data, uut.spi.ss, uut.data_rdy);
        
        $display($time, ": running %b, reg_cnt %b, data_ready %b, sid_clk %b%b, posedge %b", 
        uut.glue.running, uut.glue.reg_cnt, uut.glue.data_rdy, uut.glue.sid_clk_q, uut.glue.sid_clk, uut.glue.sid_posedge);
        
        $display();
    end
    
	initial begin
		clk = 0;
		rst_n = 0;
		ss = 1;
		sclk = 0;
		mosi = 0;
        
        #50
        rst_n = 1;
        
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

        #2500
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

