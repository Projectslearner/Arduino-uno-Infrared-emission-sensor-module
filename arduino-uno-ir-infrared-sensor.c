/*
    Code by : Projects_learner
    Project name : Infrared sensor receiver module using Ardino UNO
    Modified Date : 02-06-2024
    Website :https://projectslearner.com/learn/arduino-uno-infrared-sensor-receiver-module
*/

const int IRSensor = 9;  // connect IR sensor module to Arduino pin 9
const int LED = 13;      // connect LED to Arduino pin 13

void setup() {
  Serial.begin(115200);     // Initialize serial communication at 115200 baud
  Serial.println("Serial Working");  // Test to check if serial is working or not

  pinMode(IRSensor, INPUT);  // Set IR sensor pin as INPUT
  pinMode(LED, OUTPUT);      // Set LED pin as OUTPUT
}

void loop() {
  int sensorStatus = digitalRead(IRSensor);  // Read the IR sensor state

  if (sensorStatus == HIGH) {  // Check if the pin is HIGH
    digitalWrite(LED, LOW);    // Turn off the LED
    Serial.println("Motion Ended!");  // Print message to serial monitor
  } else {
    digitalWrite(LED, HIGH);   // Turn on the LED
    Serial.println("Motion Detected!");  // Print message to serial monitor
  }

  delay(100);  // Small delay to avoid flooding the serial monitor
}
