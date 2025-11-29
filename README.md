
SECURE EMBEDDED RFID-BASED VOTING SYSTEM WITH EEPROM STORAGE (ARM LPC2129)

PROJECT OVERVIEW
This project implements a secure embedded electronic voting system using RFID authentication, UART communication, and the ARM LPC2129 microcontroller. It features a three-candidate voting mechanism with real-time vote display through UART.

The system is enhanced with external EEPROM using the I2C protocol, allowing permanent storage of voting data even after power loss.

KEY FEATURES
- RFID-based voter authentication
- Three-candidate voting system
- Permanent vote storage using EEPROM (I2C)
- Secure and accurate vote counting
- Real-time UART display of authentication, vote confirmation, and results
- Simple and expandable design

SYSTEM COMPONENTS

ARM LPC2129 MICROCONTROLLER
- Controls overall voting logic
- Reads switch inputs
- Handles UART communication
- Controls I2C communication with EEPROM

RFID READER
- Reads RFID tag information
- Allows only authenticated users to vote

PUSHBUTTON SWITCHES (4 TOTAL)
- Switch 1 → Vote for Candidate A
- Switch 2 → Vote for Candidate B
- Switch 3 → Vote for Candidate C
- Switch 4 → Display total vote count

EEPROM (I2C)
- Saves voting data permanently
- Prevents data loss during power failure

UART COMMUNICATION
Displays:
- RFID authentication status
- Vote confirmation
- Final voting results

TECHNOLOGIES USED
- ARM LPC2129 Microcontroller
- Embedded C Programming
- RFID Module
- UART Serial Communication
- I2C Protocol
- External EEPROM
- Pushbutton Switches
- Keil IDE
- Flash Magic

WORKING PRINCIPLE
1. Power ON the system
2. Scan the RFID card
3. If authenticated, voting is enabled
4. Press any of the three voting switches:
   - Switch 1 → Candidate A
   - Switch 2 → Candidate B
   - Switch 3 → Candidate C
5. The vote is counted and stored permanently in EEPROM using I2C
6. Press Switch 4 to display total vote count
7. All messages and results are displayed in LCD

EEPROM DATA STORAGE (I2C ENHANCEMENT)
- Voting data is written to external EEPROM using the I2C protocol
- Data is retained even after power OFF
- Ensures tamper resistance and data reliability

FUTURE ENHANCEMENTS
- Touchscreen user interface
- LED and buzzer feedback
- Admin login with password protection
- Multi-round and multi-election support
- PC-based monitoring system
- Cloud-based result synchronization

APPLICATIONS
- Educational institutions
- Organizations and clubs
- Secure digital voting prototype
- Embedded systems research

AUTHOR
Madhavan T
Embedded Systems Developer
