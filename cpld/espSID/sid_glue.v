module sid_glue(
    input clk,
    input sid_clk,
    input data_rdy,
    output reg [4:0] addr,
    output reg sid_cs,
    output sid_rw,
    output led_d1
    );

assign sid_rw = sid_cs;

endmodule
