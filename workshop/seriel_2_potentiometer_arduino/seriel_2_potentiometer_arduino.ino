int potPin = 0;   // Sæt i Analog 0;
int ledPin = 9;
int value = 0;
void setup() {
  pinMode(ledPin, OUTPUT);

  //Åbn en seriel forbindelse
  Serial.begin(9600);
}

void loop() {
  value = analogRead(potPin);
  value = map(value, 0, 1023, 0, 255);

 Serial.println(value);

  delay(50);
}
