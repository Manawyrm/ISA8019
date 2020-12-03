# ISA8019
ISA8019 is a modern, open-source hardware design for an ISA-bus network card.
It uses an RTL8019 chipset and is NE2000-compatible, which makes it easy to use with just about any operating system or software available. 

The design is optimized for automated assembly at jlcpcb.com. 

<img src="https://screenshot.tbspace.de/kglbnxhatcu.jpg" width="60%">

Only the RJ45 jack, jumper headers and the DIP-28 socket for the Boot ROM have to be soldered. 
Jumpers and Boot ROM are optional, the card can be used without any jumpers configured. 

Configuration can be done in 3 modes: 
- Jumper mode (JP jumper set)  
This mode allows for manual configuration of any parameters (I/O address, IRQ, BROM address & size, etc.) manually via jumpers. Refer to the back of the PCB for details. 
- EEPROM mode (also called "Jumperless", no jumpers set)  
In this mode, all parameters can be configured via the RSET8019.EXE dos utility and will be stored in the 9364 I²C EEPROM.
- PNP mode (no jumpers set)  
For modern computers and operating systems like Windows 9x or Linux, this mode is ideal. Resource management will be done by the BIOS or OS.

#### Details, Drivers, Usage follow. 

[https://tbspace.de](https://tbspace.de)
