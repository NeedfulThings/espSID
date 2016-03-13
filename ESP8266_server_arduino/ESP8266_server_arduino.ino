/*
 * A rudimentary ESP8266 server for relaying SID register data from a PC. 
 * There is no error checking! NONE! If you send garbage and your SID (or house, or
 * anything else) blows up don't blame me. Use at your own risk. 
 * 
 * To play a tune just start sending frames (one frame = all 25 SID registers), 
 * once 50 frames are cached the program will start sending the data over SPI to the 
 * CPLD which takes care of clocking the SID and asserting the correct address/data 
 * onto its bus.
 * 
 * by Blark (mark@basegg.io)
 * 
 */

#include <SPI.h>
#include <ESP8266WiFi.h>
#include <Ticker.h>
// Note:  The RingBuf library requires some editing as it's designed for the original Arduino.
//        Remove all mention of atomic operations and it works fine on the ESP8266. 
#include <RingBuf.h>  

#define LOW_FRAMES 48   // request more frames when the buffer gets to this number 
#define SPI_SPEED 4000000 // the ESP SPI bus can clock up to 80MHz. 4MHz lets a logic probe Saleae see it for debug.

const char* ssid     = "sangsom";
const char* password = "***REMOVED***";

uint8_t sid_register[25] = {0}; // incoming SID register data
uint8_t byte_cnt = 0;           // bytes received (25 = all SID registers)
uint32_t frame_cnt = 0;         // how many frames have been received 
bool req_more = false;          // flag that gets set when we need to ask for more frames

Ticker send_data; // 50Hz ticker for sending SID data
RingBuf *reg_buf = RingBuf_new(sizeof(sid_register), 250);  // Ring buffer that holds frames

WiFiServer server(1337);  // Sets up a TCP server
WiFiClient client;

void sid_update(){
  uint8_t foo[25]; 
  reg_buf->pull(reg_buf, &foo); // Pull a frame off the buffer
  SPI.writeBytes(foo, 25);  // send the frame to the SPI bus
  uint8_t frames_left = reg_buf->numElements(reg_buf); 
  if (frames_left == LOW_FRAMES) {
    // if we're low on frames set the bool to request more
    Serial.printf("%u frames received, requesting more.", frame_cnt);
    req_more = true;
  }
  else if (!frames_left) {
    // if we've hit 0 frames in the buffer the playback is over
    Serial.printf("Frame buffer exhausted. Turning off ticker.\n", frame_cnt);    
    send_data.detach(); // if there's no frames left to play stop updates
    frame_cnt = 0;
  }
}

void setup() {
  Serial.begin(115200);
  delay(100);

  // We start by connecting to a WiFi network

  Serial.println();
  Serial.println();
  Serial.print("Connecting to ");
  Serial.println(ssid);

  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("");
  Serial.println("WiFi connected");
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());

  Serial.print("Setting up the SPI bus...");
  SPI.begin(); // wake up the SPI bus.
  SPI.setBitOrder(MSBFIRST);
  SPI.setHwCs(true); // use hardware select
  SPI.setFrequency(SPI_SPEED); 
  Serial.println("done");

  Serial.print("Buffer setup...");
  if (reg_buf) {
    Serial.println("OK");
  }

  server.begin(); // start the TCP server 
}

void loop() {
  
  if (!client.connected()) {
    client = server.available(); // try to connect to a new client
  } else {

    if (req_more) {
      // First thing we need to do is ask for more data if the buffer is getting low
      client.write("?");  
      Serial.println(" Sent.");
      req_more = false;
    }

    if (client.available() > 0) {
      sid_register[byte_cnt] = client.read();
      //Serial.printf("%02x", sid_register[byte_cnt]);  // print recieved bytes for debug
      if (++byte_cnt == 25) {
        reg_buf->add(reg_buf, &sid_register);
        //Serial.println();
        byte_cnt = 0;
        if (++frame_cnt == 50) {
          Serial.printf("\n\nReceived 50 frames, starting playback\n");
          send_data.attach(0.02, sid_update);
        }
      }
    }
  }

}
