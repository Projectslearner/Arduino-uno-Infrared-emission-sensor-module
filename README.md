# Motion Detection Using IR Sensor and Arduino

## Description

This project demonstrates how to use an Infrared (IR) sensor to detect motion and control an LED with an Arduino. The IR sensor detects the presence or absence of motion, and the Arduino processes this information to turn an LED on or off accordingly. The status of the motion detection is also printed to the Serial Monitor, making it useful for applications like security systems, automation, and presence detection.

## Components Needed

1. **Arduino UNO**
2. **IR Sensor Module**
3. **LED**
4. **Breadboard**
5. **Jumper Wires**
6. **Resistor (optional, for LED)**

## Diagram

*I will update the block diagram with a logo or watermark ASAP. Please leave it for now.*

## Instructions

### Connecting the Components

1. **IR Sensor to Arduino:**
   - Connect the VCC pin of the IR sensor to the 5V pin on the Arduino.
   - Connect the GND pin of the IR sensor to the GND pin on the Arduino.
   - Connect the output pin of the IR sensor to digital pin 9 on the Arduino (IRSensor).

2. **LED to Arduino:**
   - Connect the anode (long leg) of the LED to digital pin 13 on the Arduino (LED).
   - Connect the cathode (short leg) of the LED to a 220-ohm resistor (optional) and then to the GND pin on the Arduino.

### Power the Arduino

- Connect the Arduino to your computer using a USB cable.

### Upload the Code and Observe the Data

1. **Load the Program:**
   - Open the Arduino IDE on your computer.
   - Write or paste the provided program into the IDE.
   - Select the correct board and port in the Arduino IDE under the Tools menu.
   - Upload the program to the Arduino.

2. **Monitor the Output:**
   - Open the Serial Monitor in the Arduino IDE by selecting Tools > Serial Monitor.
   - Set the baud rate to 115200 in the Serial Monitor.
   - Observe the messages indicating whether motion is detected or not, and watch the LED turn on or off accordingly.

## Project Operation

- **Initialization:**
  - The Arduino initializes serial communication at 115200 baud.
  - A test message "Serial Working" is printed to the Serial Monitor to ensure serial communication is functioning.

- **Motion Detection:**
  - The Arduino continuously reads the state of the IR sensor connected to pin 9.
  - When motion is detected (sensor output is LOW), the LED connected to pin 13 turns on, and "Motion Detected!" is printed to the Serial Monitor.
  - When no motion is detected (sensor output is HIGH), the LED turns off, and "Motion Ended!" is printed to the Serial Monitor.
  - A short delay of 100 milliseconds is added to avoid flooding the Serial Monitor with messages.

## Applications

1. **Security Systems:** Used to detect intruders and trigger alarms or alerts.
2. **Automation:** Implemented in automated lighting systems to turn lights on or off based on occupancy.
3. **Presence Detection:** Utilized in various devices to detect the presence or absence of a person or object.

## Support

For any issues or further assistance, please contact us:

- 🌐 [Projects Learner](https://projectslearner.com)
- 📧 Email: projectslearner@gmail.com
- 📸 Instagram
- 📘 Facebook
- ▶️ YouTube
- 📘 LinkedIn

Made for you with ❣️ from ProjectsLearner.

---

Feel free to ask for any modifications or additional details you'd like to include!