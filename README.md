# Ground station software
A ground station software build for the rocketry project **Propulse NTNU**
Go check that out here: [link]https://www.propulsentnu.no/

To install this package, simply run the ground-station installer file found in `installer/`
## Details
- Built in Qt5 with C++ using a Designer ui file
- contains a network module that connects to the rocket to communicate over UDP
- collects realtime sensor data from rocket, along with HD video streaming
- Packets are verified with CRC32 checksum
- All data received is written to the file `res/out.txt`
- to recompile the installer, write `cd installer/` and type: `./installer-framework/bin/binarycreator --offline-only -c config/config.xml -p packages/ ground-station`
## The Display
![alt text](https://raw.githubusercontent.com/mariusud/Ground-station/master/res/sample_screenshot.png)
