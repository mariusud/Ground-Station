# Ground station software
A ground station software build for the rocketry project **Propulse NTNU**
Go check that out here: [link]https://www.propulsentnu.no/
## Details
- Built in Qt5 with C++ using a Designer ui file
- contains a network module that connects to the rocket to communicate over UDP
- collects realtime sensor data from rocket, along with HD video streaming
- Packets are verified with CRC32 checksum
- All data received is written to the file `res/out.txt`
## The Display
![alt text](https://raw.githubusercontent.com/mariusud/Ground-station/master/res/sample_screenshot.png)

installer-framework/bin/binarycreator -t installer-framework/bin/installerbase -p packages/package1/meta/package.xml -c config/config.xml ground-station


./installer-framework/bin/binarycreator --offline-only -c config/config.xml -p packages/ ground-station