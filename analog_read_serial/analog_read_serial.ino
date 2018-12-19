// Analog read serial

int pin = 3; // specific the pin you want to read

void setup() {
  Serial.begin(9600);
}

void loop() {
  int result = analogRead(pin);
  Serial.println(result);
  delay(100); // delay 100 ms
}
