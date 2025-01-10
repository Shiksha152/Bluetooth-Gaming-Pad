const int buttonPin = 2;  // Button connected to pin 2
bool buttonState = false;

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  bool newButtonState = digitalRead(buttonPin);
  
  if (newButtonState != buttonState) {
    buttonState = newButtonState;
    Serial.println(buttonState);
  }
  
  delay(100);
}
