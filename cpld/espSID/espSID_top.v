//
// espSID by Mark Baseggio (blark)
//
//
// https://github.com/blark/espSID 
//
//////////////////////////////////////////////////////////////////////////////////

module espSID_top(
    input clk,  // 20MHz CPLD clock
    input rst,
    output led_d1,
    output led_d2,
    output sid_clk  // 1MHz clock out from clock_divider module
    );

    
    assign led_d1 = 1'b1; // Turn on an LED on the DP CPLD board
    assign led_d2 = 1'b0;
    

    // The clock divider module creates the 1MHz clock for the SID

    clock_divider #(.SYS_CLK(20000000),.CLK_OUT(1000000)) divider(
        .clk        (clk),
        .sid_clk    (sid_clk)
    );
    

endmodule
