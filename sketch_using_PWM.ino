int ledpin = 13 
void setup() {
  Serial.begin(9600);     ////character / second. baud rate: esp32 115200
  pinMode(ledpin, OUTPUT);

}

void loop() {
  digitalWrite(ledpin, HIGH);
  delay(100);
  digitalWrite(ledpin, LOW);
  delay(300);

}
