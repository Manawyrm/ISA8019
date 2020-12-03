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

### Details
[Rev. A - Schematic](PCB/gerbers/RevA/ISA8019.pdf)  
[Rev. A - Interactive BOM](https://tbspace.de/content/downloads/isa8019_ibom.html)  
[Rev. A - Gerbers & Production files](PCB/gerbers/RevA/ISA8019/ISA8019.zip)  

### Drivers
[Official Realtek drivers, Windows 3.11, 9x, NT](https://github.com/Manawyrm/ISA8019/tree/master/Drivers/Official%20Realtek%20drivers)  
[MS-DOS packet drivers, for 16-bit machines](Drivers/Crynwr%20packet%20driver%20-%2016bit%20ISA)  
[MS-DOS packet drivers, modded for 8-bit XT machines](Drivers/Crynwr%20packet%20driver%20-%20modified%20for%208bit%20operation)  

### Programming utilities
[RSET8019.EXE](Programming%20utilities/Rset8019.exe) for DOS, can set EEPROM parameters, also includes diagnostic functions  
[pg8019](Programming%20utilities/pg8019) for DOS, can initialize EEPROM, set MAC address, vendor/product IDs  

[https://tbspace.de](https://tbspace.de)
