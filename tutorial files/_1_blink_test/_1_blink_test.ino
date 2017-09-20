/* 
 * Blink test 
 * Denne skitse er for at teste om der er hul
 * igennem til din Arduino. Hvis der er skal
 * kontrollampen på boardet begynde at blinke
 */

int pin = 13;

void setup() {
  // Sæt pin 13 til at sende data
  pinMode(pin, OUTPUT);
}

void loop() {
  digitalWrite(pin, HIGH); // Tænd for pin 13
  delay(500);              // Vent i 0,5 sekunder
  digitalWrite(pin, LOW);  // Sluk for pin 13
  delay(1000);             // Vent i 1 sekund

}
