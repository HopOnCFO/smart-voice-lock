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
