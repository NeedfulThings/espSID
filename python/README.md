Python client
=============

This program sends the SID register data to the ESP8266.

Sample output
-------------
```
$ ./RealSID.py
usage: RealSID.py [-h] [-s SONG] [-t TIME] filename
RealSID.py: error: too few arguments
McGrupp:python blark$ ./RealSID.py -t 1 Comic_Bakery.sid
SID type: PSID (version 2)
Load address: 0000
Init address: 7F00
Play address: 7F03
Found 14 song(s) (default song is 1)
Using 50Hz vertical blank interrupt.
Title    : Comic Bakery
Author   : Martin Galway
released : 1986 Imagine
Warning: SID has load address 0, reading from C64 binary data
New load address is 7F00
Initializing song 1...
Playing for 1 seconds...
Connecting to server 192.168.9.27 on port 1337

    # | Voice 1        | Voice 2        | Voice 3        | Filter
----------------------------------------------------------------------
    0 | 00000000000000 | 00000000000000 | 6C0600062113C9 | 0000000F
    1 | 00000000000000 | 00000000000000 | 6C0600062113C9 | 0000000F
    2 | 00000000000000 | 00000000000000 | 6C061E062113C9 | 0000000F
    3 | 00000000000000 | 00000000000000 | 6C063C062113C9 | 0000000F
    4 | 00000000000000 | 00000000000000 | 6C065A062113C9 | 0000000F
    5 | 00000000000000 | 00000000000000 | 6C0678062113C9 | 0000000F
    6 | 00000000000000 | 00000000000000 | 660696062113C9 | 0000000F
    7 | 00000000000000 | 00000000000000 | 6006B4062113C9 | 0000000F
    8 | 00000000000000 | 00000000000000 | 5A06D2062113C9 | 0000000F
    9 | 00000000000000 | 00000000000000 | 5406F0062113C9 | 0000000F
   10 | 00000000000000 | 00000000000000 | 4E060E072113C9 | 0000000F
   11 | 00000000000000 | 00000000000000 | 48062C072013C9 | 0000000F
   12 | 00000000000000 | 00000000000000 | 6C060006211389 | 0000000F
   13 | 00000000000000 | 00000000000000 | 6C060006211389 | 0000000F
   14 | 00000000000000 | 00000000000000 | 6C061E06211389 | 0000000F
   15 | 00000000000000 | 00000000000000 | 6C063C06211389 | 0000000F
```


