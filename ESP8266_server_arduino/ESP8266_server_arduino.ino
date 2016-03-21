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
 * Note:  The RingBuf library requires some editing as it's designed for the original Arduino.
 * Remove all mention of atomic operations and it works fine on the ESP8266. 
 * Check out https://github.com/wizard97/ArduinoRingBuffer/issues/2 for more info.
 */

#include <SPI.h>
#include <ESP8266WiFi.h>
#include <Ticker.h>
#include <RingBuf.h>  

#define LOW_FRAMES 48   // request more frames when the buffer gets to this number 
#define SPI_SPEED 4000000 // the ESP SPI bus can clock up to 80MHz. 4MHz lets a logic probe Saleae see it for debug.

const char* ssid     = "sangsom";
const char* password = "***REMOVED***";

uint8_t zero_frame[25] = {0};
uint8_t sid_register[25] = {0}; // incoming SID register data
uint32_t frame_cnt = 0;         // how many frames have been received 
bool req_more = false;          // flag that gets set when we need to ask for more frames

Ticker send_data; // 50Hz ticker for sending SID data
RingBuf *reg_buf = RingBuf_new(sizeof(sid_register), 250);  // Ring buffer that holds frames

WiFiServer server(1337);  // Sets up a TCP server
WiFiClient client;

void sid_update(){
  uint8_t foo[25];
  uint8_t frames_left; 
  reg_buf->pull(reg_buf, &foo); // Pull a frame off the buffer
  SPI.writeBytes(foo, 25);  // send the frame to the SPI bus
  frames_left = reg_buf->numElements(reg_buf); 
  if (frames_left == LOW_FRAMES) {
    req_more = true;  // if we're low on frames set the bool to request more
  }
  else if (!frames_left) {      // if we've hit 0 frames in the buffer the playback is over
    SPI.writeBytes(zero_frame, 25);
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
      // Ask for more data if the buffer is getting low
      client.write("?");  
      req_more = false;
    }

    if (client.available() > 0) {
      client.readBytes(sid_register, 25);
      reg_buf->add(reg_buf, &sid_register);
      if (++frame_cnt == 50) {
        send_data.attach(0.02, sid_update);
      }
    }
  }

}
