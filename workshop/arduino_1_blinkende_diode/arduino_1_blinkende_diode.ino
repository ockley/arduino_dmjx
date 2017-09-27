
// Sæt variabel til brugt port
int ledPin = 8;

void setup() {
  // Skift portens tilstand til OUTPUT
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Tænd for porten
  digitalWrite(ledPin, HIGH);
  // Vent 1 sekund
  delay(1000);
  // Tænd for porten
  digitalWrite(ledPin, HIGH);
  // Vent 0,5 sekunder
  delay(500);

}
