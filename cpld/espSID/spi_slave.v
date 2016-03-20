module spi_slave(
    input clk,
    input rst,
    input ss,
    input sclk,
    input mosi,
    output reg [4:0] addr,
    output reg [7:0] data,
    output reg write_en,
    output data_rdy,
    output reg led_d2
    );

    reg [7:0] bit_cnt = 8'b0;   // number of bits rec'd
    reg [6:0] tmp = 7'b0;   // temp storage for incoming bits
    reg [2:0] ss_r;  // registers for edge detection
    reg [2:0] sclk_r;
    reg [1:0] mosi_r;
    
    // SPI clock is different from clk so we need to detect edges.
    
    wire sclk_risingedge = (sclk_r[2:1]==2'b01); 
    wire sclk_fallingedge = (sclk_r[2:1]==2'b10);
    wire ss_active = ~ss_r[1];  // ss is active low
    wire ss_startmessage = (ss_r[2:1]==2'b10);  // message starts at falling edge
    wire ss_endmessage = (ss_r[2:1]==2'b01);  // message stops at rising edge
    wire mosi_data = mosi_r[1];
        
    assign data_rdy = ss_endmessage; // ready flag is up when there is no SPI transfer
    
    always @(posedge clk) begin
        if (rst) begin
            bit_cnt <= 1'b0;
            tmp <= 8'b0;
            led_d2 <= 1'b0;
        end 
        else begin
            sclk_r <= {sclk_r[1:0], sclk};  // update SPI edge detection registers
            ss_r <= {ss_r[1:0], ss};
            mosi_r <= {mosi_r[0], mosi};
            
            write_en <= (write_en) ? 1'b0 : 1'b0;    // disable the write to RAM register if we used it last time
            
            if(~ss_active) begin  // reset count when we reach 200 bits and spi is done
                bit_cnt <= 8'b0; 
            end 
            else 
                if (sclk_risingedge) begin  
                    bit_cnt <= bit_cnt + 8'd1;
                    if (bit_cnt[2:0] == 3'b111) begin // we got 8 bits
                        addr <= bit_cnt[7:3];   // store 8 bit register value in ram
                        data <= {tmp, mosi_data};
                        write_en <= 1'b1;
                    end
                    else tmp <= {tmp[5:0], mosi_data};
                end
            end
        end
    

endmodule
