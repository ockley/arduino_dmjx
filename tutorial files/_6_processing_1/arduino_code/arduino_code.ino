int potPin = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(potPin);
  Serial.print("Pot værdi = ");
  Serial.println(value);
}
