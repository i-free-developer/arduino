int button = 2; // digital pin 2 attached to a pushbutton

void setup() {
  Serial.begin(9600);
  pinMode(button, INPUT); //the pin in input mode
}

void loop() {
  int state = digitalRead(button);
  Serial.println(state);
  delay(1000); // delay between reads for stability
}
