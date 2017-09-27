int ledPin = 8;     // diode port
int potPin = 9;     // potentiometer port
int value = 0;      // potentiometer værdi

void setup() {
  // Skift diode port til OUTPUT
  // Potentiometeret behøver ikke port
  // Fordi den sidder i 'Analog In' sektionen
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Læs værdien fra potentiometeret
  value = analogRead(potPin);   // 0-1023

  // Map værdien til et tal mellem 0 og 255
  // Vend også talrækken så det føles som om
  // der skrues op.
  value = map(value, 0, 1023, 255, 0);

  // Skriv værdien til dioden på en PWM port
  // PWN porte har en bølge (~) ud for sit nummer
  analogWrite(ledPin, value);
}
