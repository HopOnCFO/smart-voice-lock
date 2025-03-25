# smart-voice-lock
Open-source Arduino projects for automation, robotics, and education by HopOnCFO. Includes code, schematics, and guides for Smart Voice Lock, Auto Irrigation, Face-Tracking Robot, and more.
# Smart Voice Lock

A voice-activated lock powered by Arduino and Bluetooth for secure, hands-free access control.

## Overview

The **Smart Voice Lock** is an open-source project designed to bring modern, voice-activated security to your home or workspace using affordable hardware. It leverages an Arduino Uno as the core microcontroller, paired with an HC-05 Bluetooth module for wireless communication and a servo motor to physically lock or unlock a mechanism. The system listens for specific voice commands sent from a paired device (like a smartphone) and responds accordingly, making it a great entry point into smart home automation.

This project began as a proof-of-concept to explore how voice recognition could be integrated into DIY security systems. Since then, it’s evolved with community feedback to include customizable commands, improved reliability, and better power efficiency. It’s still in progress, with active development focused on enhancing voice recognition accuracy and adding multi-user support.

## Features

- **Voice Command Recognition**: Unlock the system with predefined phrases sent via Bluetooth (e.g., "unlock", "open").
- **Low Power Consumption**: Includes sleep mode to save energy when idle.
- **Customizable Commands**: Easily modify the command phrases in the code.
- **Adjustable Lock Duration**: Set how long the lock stays unlocked before automatically locking again.
- **Error Handling**: Responds to unrecognized commands with feedback via Serial.
- **Debugging Support**: Outputs status and command logs for troubleshooting.

## Requirements

### Hardware
- **Arduino Uno**: The main microcontroller.
- **HC-05 Bluetooth Module**: For wireless communication.
- **SG90 Servo Motor**: Controls the locking mechanism.
- **Power Source**: 9V battery or USB power (5V).
- **Breadboard and Jumper Wires**: For prototyping.
- **Optional**: 3D-printed lock housing, 10kΩ resistors for circuit stability.

### Software
- **Arduino IDE**: To upload the code.
- **Bluetooth-enabled Device**: E.g., Android smartphone with a serial terminal app (like "Bluetooth Serial Terminal").
- **Optional**: Custom Android app for voice input.

## Files

- `smart_voice_lock.ino`: Main Arduino code for the lock.
- `SCHEMATIC.md`: Text description of the wiring schematic (see below).

## Installation

### Wiring Schematic (SCHEMATIC.md)

1. **Servo Motor**: Connect to pin 9 (signal), 5V (VCC), and GND.
2. **HC-05 Bluetooth**: Wire TX to Arduino RX (pin 0), RX to Arduino TX (pin 1), VCC to 5V, GND to GND.
3. **Power**: Use a 9V battery or USB to power the Arduino.

### Steps
1. **Assemble the Circuit**: Follow the schematic above.
2. **Upload the Code**: Open `smart_voice_lock.ino` in Arduino IDE and upload it to your Arduino Uno.
3. **Pair Bluetooth**: On your device, pair with HC-05 (default password: 1234 or 0000).
4. **Test**: Use a serial terminal app to send "unlock" or "open". The servo should rotate to 90° for 5 seconds, then return to 0°.
5. **Debug**: Open the Serial Monitor (9600 baud) to see command logs and status.

### Troubleshooting
- **Servo doesn’t move**: Check power supply (5V minimum) and wiring to pin 9.
- **Bluetooth not connecting**: Ensure HC-05 is in pairing mode (blinking LED) and the correct COM port is used.
- **Unrecognized commands**: Verify exact spelling (case-sensitive) and trailing newline (`\n`).

## Code Explanation

The main code (`smart_voice_lock.ino`) listens for Bluetooth commands and controls the servo:
- `"unlock"` or `"open"`: Moves servo to 90° (unlocked) for 5 seconds, then back to 0° (locked).
- `"status"`: Reports current lock state.
- Logs all actions to Serial for debugging.

## Roadmap
- Add onboard voice recognition with a microphone module (e.g., KY-038).
- Implement multi-user support with unique voice profiles.
- Optimize power with deeper sleep modes and wake-on-command.
- Add a physical override button for emergencies.

## Contributing
We welcome contributions! Fork this repo, make changes, and submit a pull request. Check issues for open tasks or suggest new features.

## License
MIT License - see [LICENSE](LICENSE) for details.

## Links
- [HopOnCFO Main Repo](https://github.com/HopOnCFO/arduino-projects)
- [Report an Issue](https://github.com/HopOnCFO/arduino-projects/issues)
