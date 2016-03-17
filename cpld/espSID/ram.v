module ram #(parameter RAM_WIDTH=8,RAM_ADDR_BITS=5)(
    input clk,
    input write_en,
    input [RAM_WIDTH-1:0] ram_in,
    input [RAM_ADDR_BITS-1:0] ram_addr,
    output [RAM_WIDTH-1:0] ram_out
    );

   (* RAM_STYLE="DISTRIBUTED" *)
   reg [RAM_WIDTH-1:0] sid_ram [(2**RAM_ADDR_BITS)-1:0];

   always @(posedge clk)
      if (write_en)
         sid_ram[ram_addr] <= ram_in;

   assign ram_out = sid_ram[ram_addr];   

endmodule
