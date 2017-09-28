const int potPin = 0;   // Sæt i Analog 0;
int value = 0;  

void setup() {
  int potPin = 0;   // Sæt i Analog 0;
  int ledPin = 9;
  int value = 0;
  void setup() {
  pinMode(ledPin, OUTPUT);
  //Åbn en seriel forbindelse
  Serial.begin(9600);
}

void loop() {
  // Læs værdien fra potentiometeret
  // på port A0
  value = analogRead(potPin);

  // Map til en værdi mellem 0 og 255.
  value = map(value, 0, 1023, 0, 255);

  // Skriv værdien ud til seriel monitor
  Serial.println(value);

  // Vent et øjeblik, så du ikke oversvømmer
  // seriel porten med data
  value = analogRead(potPin);
  value = map(value, 0, 1023, 0, 255);

 Serial.println(value);
  delay(50);
}
