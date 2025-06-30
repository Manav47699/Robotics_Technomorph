int ledPin = 9;         // Use a PWM pin like 9
int brightness = 0;     // Current brightness (0 to 255)
int fadeAmount = 5;     // Amount to change the brightness

void setup() {
  Serial.begin(9600);   // Start serial communication
  pinMode(ledPin, OUTPUT);
}

void loop() {
  analogWrite(ledPin, brightness);  // Set brightness (PWM)

  brightness += fadeAmount;         // Change brightness

  // Reverse the direction at the ends
  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
  }

  delay(30);   // Delay to control speed of fading
}
