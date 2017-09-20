/* 
 * BRGB
 * Denne skitse tænder og slukker en lampe ved
 * hjælp af tryk på 2 knapper
 * https://learn.adafruit.com/adafruit-arduino-lesson-6-digital-inputs
 */

int ledPin = 5;
int buttonAPin = 9;
int buttonBPin = 8;

byte leds = 0;

void setup() {
  //Sæt en serialforbindelse igang
  while (!Serial);
  Serial.begin(9600);
  
  pinMode(ledPin, OUTPUT);
  // Sæt knapperne til automatisk at stå til HIGH
  // med mindre der trykkes (INPUT_PULLup)
  pinMode(buttonAPin, INPUT_PULLUP);
  pinMode(buttonBPin, INPUT_PULLUP);
  
}

void loop() {
  
 if (digitalRead(buttonAPin) == LOW) {
  // Skriv en tekst til serial monitoren
  Serial.println("Knap A trykkes ned");

  // Tænd lampen
  digitalWrite(ledPin, HIGH);
 }
 if (digitalRead(buttonBPin) == LOW) {
  Serial.println("Knap B trykkes ned");

  // Sluk lampen
  digitalWrite(ledPin, LOW);
 }
}
