`timescale 1ns / 1ps

module newtest;

	// Inputs
	reg clk;
	reg rst_n;
	reg ss;
	reg sclk;
	reg mosi;

	// Outputs
	wire led_d1;
	wire led_d2;
	wire sid_clk;
	wire [7:0] sid_data;
	wire [4:0] sid_addr;
	wire sid_cs;
	wire sid_rw;
	wire sid_rst;

	// Instantiate the Unit Under Test (UUT)
	espSID_top uut (
		.clk(clk), 
		.rst_n(rst_n), 
		.led_d1(led_d1), 
		.led_d2(led_d2), 
		.sid_clk(sid_clk), 
		.sid_data(sid_data), 
		.sid_addr(sid_addr), 
		.sid_cs(sid_cs), 
		.sid_rw(sid_rw), 
		.sid_rst(sid_rst), 
		.ss(ss), 
		.sclk(sclk), 
		.mosi(mosi)
	);

    integer i, x;

    always #5 clk = ~clk;
    
    always @(posedge clk) begin
        $display($time, ": sid_ram %b, addr %b, data_in %b, ram_out %b, en %b", 
        uut.ram.sid_ram, uut.ram.write_addr, uut.ram.ram_in, uut.ram.ram_out, uut.ram.write_en);
        
        $display("SPI: tmp %b, bit_cnt %d, write_en %b, addr %b, data %b, ss %b, data_rdy %b", 
        uut.spi.tmp, uut.spi.bit_cnt, uut.spi.write_en, uut.spi.addr, uut.spi.data, uut.spi.ss, uut.data_rdy);
        
        $display("GLUE: running %b, reg_cnt %d, data_ready %b, sid_clk %b%b, posedge %b, ramout %b, last_frame %b", 
        uut.glue.running, uut.glue.reg_cnt, uut.glue.data_rdy, uut.glue.sid_clk_q, uut.glue.sid_clk, uut.glue.sid_posedge, uut.glue.ram_out, uut.glue.last_frame[uut.glue.reg_cnt]);
        
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

        #10000
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
        //mosi = ~mosi;   // setup for all identical bits to test compare 
    
        #10000
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
