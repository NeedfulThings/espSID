espSID
======

A repository for my ESP8266 SID project.

Hardware
---------

Here's how it works:

PC (Python py65) --> ESP8266 --> CPLD --> SID --> EARS


I use [py65](https://github.com/mnaberez/py65), an implementation of the 6502 MPU in Python, in order to "play" the SID file. Since a SID file is basically a 6502 program, we can feed the binary data to the MPU and then let it run until each frame has been written to memory. Then in Python we read the 6502's memory in order to see what the register values that should be written to the SID are. The SID chip is mapped from $D400-D41C of the C64's memory, so we can read the register values that we need from there.

This technique was borrowed from [the RealSIDShield](https://github.com/atbrask/RealSIDShield), thanks to A.T for helping me out with this project. 

Most older SID files play at 50Hz, so that means 50 register updates to the SID per second. All we need to do now is get the data from Python over to the SID, so for that I use the ESP8266 which is a cheap wireless platform with an 80MHz MCU that has hardware SPI. I send ~100 frames of data at a time to the ESP, then set up a timer to send each of those frames at 50Hz over to the SID via a CPLD.

The CPLD handles clocking the SID and expanding from SPI to parallel address/data lines to assert the register data each clock cycle. 

Eventually I would like to implement a buffer in the CPLD and hand off the clocking of the playback to it as well because I think it would be more accurate than the ESP. Newer SID files use SID refresh rates of about 300x faster in order to achieve cool hacky things on the SID. The CPLD would have no problem keeping up with this. Since the ESP is already busy with Wireless, I'm not so sure it's up to the task. 


Right now everything is on a breadboard, however I plan to design a PCB in the near future. 


Software
--------

###Python script

A modified version of RealSID.py reads SIDs and sends the data over the network.

###ESP Arduino Code

Code written using the Arduino ESP libraries receives the SID data into a buffer and relays it via SPI to the CPLD.

###ISE Project (XSVF)

The CPLD software handles clocking the SID, and acts as a SPI slave receiving data from the ESP and clocking it out onto the SID bus.


