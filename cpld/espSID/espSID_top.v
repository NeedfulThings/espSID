//
// espSID by Mark Baseggio (blark)
//
//
// https://github.com/blark/espSID 
//
//////////////////////////////////////////////////////////////////////////////////

module espSID_top(
    input clk,  // 20MHz CPLD clock
    input rst_n,    // active low reset
    output led_d1,
    output led_d2,
    output sid_clk,  // SID lines: 1MHz clock out from clock_divider module
    output [7:0] sid_data, // 8 bit data bus
    output [4:0] sid_addr, // 5 bit address bus
    output sid_cs,  // chip select - active low
    output sid_rw,  // read/write - read high, write low
    output sid_rst, // reset - active low (10 sid_clk cycles) to reset
    input ss,
    input sclk,
    input mosi
    );

    
    wire [4:0] read_addr;
    wire [4:0] write_addr;
    wire [7:0] ram_in;
    wire [7:0] ram_out;
    wire rst = ~rst_n;
    wire write_en;
    wire data_rdy;
    wire sid_cs_active = (~|sid_cs);

    assign sid_data = sid_cs_active ? ram_out : 8'bZ; // disconnect the ram wires from the bus if SID not selected
    assign sid_addr = sid_cs_active ? read_addr : 5'bZ;
    
    assign led_d1 = rst;

    // The clock divider module creates the 1MHz clock for the SID

    clock_divider #(.SYS_CLK(20000000),.CLK_OUT(1000000)) divider(
        .clk        (clk),
        .rst        (rst),
        .sid_clk    (sid_clk)
    );
    
    // Storage for the incoming SID register data
   
    ram #(.RAM_WIDTH(8),.RAM_ADDR_BITS(5)) ram(
        .clk        (clk),
        .write_en   (write_en),
        .read_addr  (read_addr),
        .write_addr (write_addr),
        .ram_in     (ram_in),
        .ram_out    (ram_out)
    );

    // SPI slave reads data from the ESP8266 and stores it to RAM

    spi_slave spi(
        .clk        (clk),
        .rst        (rst),
        .ss         (ss),
        .sclk       (sclk),
        .mosi       (mosi),
        .addr       (write_addr),   
        .data       (ram_in),
        .write_en   (write_en),
        .data_rdy   (data_rdy),
        .led_d2     (led_d2)
    );

    // SID glue waits for data_rdy then writes registers to SID
    
    sid_glue glue(
        .clk        (clk),
        .rst        (rst),
        .sid_clk    (sid_clk),
        .data_rdy   (data_rdy),
        .ram_out    (ram_out),
        .addr       (read_addr),
        .sid_cs     (sid_cs),
        .sid_rw     (sid_rw),
        .sid_rst    (sid_rst)
    );
        
endmodule
