const int potPin = 0;   // Sæt i Analog 0;
const int ledPin = 9;   // Sæt led i port 9
int value = 0;  

void setup() {
  //Åbn en seriel forbindelse
  Serial.begin(9600);
  // Send en dataværdi for at starte loop'et
  Serial.write(0);
}

void loop() {
  // Er der data fra Processing?
  if(Serial.available() > 0) {
    int ledLight = Serial.read();
    analogWrite(ledPin, ledLight);

    // Læs værdien fra potentiometeret på A0
    value = analogRead(potPin);
    // Map til en værdi mellem 0 og 255.
    value = map(value, 0, 1023, 0, 255);
    // Skriv værdien ud til seriel monitor
    Serial.println(value);
  }
}
