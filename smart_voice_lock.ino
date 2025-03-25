// Smart Voice Lock - Arduino Code
#include <Servo.h>

Servo lockServo;          // Servo object for lock mechanism
const int servoPin = 9;   // Servo connected to pin 9
String command;           // Store incoming Bluetooth command

void setup() {
  lockServo.attach(servoPin);    // Attach servo to pin 9
  Serial.begin(9600);            // Start Bluetooth communication at 9600 baud
  lockServo.write(0);            // Set initial position to locked (0°)
  Serial.println("Smart Voice Lock Ready"); // Initialization message
}

void loop() {
  if (Serial.available() > 0) {  // Check if Bluetooth data is available
    command = Serial.readStringUntil('\n'); // Read command until newline
    command.trim();              // Remove whitespace
    Serial.println("Received: " + command); // Log received command

    if (command == "unlock" || command == "open") {
      lockServo.write(90);       // Move to unlocked position (90°)
      Serial.println("Unlocked");
      delay(5000);               // Stay unlocked for 5 seconds
      lockServo.write(0);        // Return to locked position (0°)
      Serial.println("Locked");
    } 
    else if (command == "status") {
      int angle = lockServo.read(); // Read current servo position
      Serial.println("Lock is " + String(angle == 0 ? "locked" : "unlocked"));
    } 
    else {
      Serial.println("Command not recognized"); // Handle invalid commands
    }
  }
}
