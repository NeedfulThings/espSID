module spi_slave(
    input clk,
    input ss,
    input sclk,
    input mosi,
    output reg [4:0] addr,
    output reg [7:0] data,
    output reg write_en,
    output reg data_rdy,
    output led_d2
    );

    reg [7:0] bit_cnt = 8'b0;
    reg [6:0] tmp;
    
    reg [2:0] ss_r;
    reg [2:0] sclk_r;
    reg [1:0] mosi_r;
    
    wire sclk_risingedge = (sclk_r[2:1]==2'b01); 
    wire sclk_fallingedge = (sclk_r[2:1]==2'b10);
    wire ss_active = ~ss_r[1];  // ss is active low
    wire ss_startmessage = (ss_r[2:1]==2'b10);  // message starts at falling edge
    wire ss_endmessage = (ss_r[2:1]==2'b01);  // message stops at rising edge
    wire mosi_data = mosi_r[1];
        
    assign led_d2 = ss_active; // light the d2 LED when we are receiving data over SPI
    
    always @(posedge clk) begin
        
        sclk_r <= {sclk_r[1:0], sclk};  // SPI edge detection registers
        ss_r <= {ss_r[1:0], ss};
        mosi_r <= {mosi_r[0], mosi};
        
        if(write_en) write_en <= 1'b0;
        
        if(~ss_active) begin  // reset count when we reach 200 bits and spi is done
            bit_cnt <= 8'b0; 
            data_rdy <= 1'b1;
        end 
        
        else if (sclk_risingedge) begin
            bit_cnt <= bit_cnt + 8'd1;
            if (bit_cnt[2:0] == 3'b111) begin // store value in ram
                addr <= bit_cnt[7:3];
                data <= {tmp, mosi_data};
                write_en <= 1'b1;
            end
            else tmp <= {tmp[5:0], mosi_data};
        end
        
    end
    

endmodule
