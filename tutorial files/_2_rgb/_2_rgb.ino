/* 
 * BRGB
 * Denne skitse skifter en RGB lampe
 * mellem forskellige farver
 * https://learn.adafruit.com/adafruit-arduino-lesson-3-rgb-leds/arduino-sketch
 * 
 */

int redPin = 11;
int greenPin = 10;
int bluePin = 9;

void setup() {
  // Sæt pin s til at sende data
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  
}

void loop() {
 setColor(255, 0, 0);
 delay(1000);
 setColor(0, 255, 0);
 delay(1000);
 setColor(0, 0, 255);
 delay(1000);
 setColor(255, 255, 0);
 delay(1000);
 setColor(80, 0, 80);
 delay(1000);
 setColor(0, 255, 255);
 delay(1000);
 

}
void setColor(int red, int green, int blue)
{
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);
  
}


