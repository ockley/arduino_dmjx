/* 
 * BRGB
 * Denne skitse styrer en servo motor
 * https://learn.adafruit.com/adafruit-arduino-lesson-14-servo-motors
 * 
 * Hvis den hopper så sæt en kondensator mellem dataPin og jord
 */

#include <Servo.h>

int potPin = 0;
int servoPin = 9;

Servo servo;

void setup() {
  while (!Serial);
  Serial.begin(9600);
  
  //Forbind til servo
  servo.attach(servoPin);  
}

void loop() {
  // Læs fra potentiometer
  int reading = analogRead(potPin);  // 0 til 1023
  int angle = map(reading, 0, 1023, 0, 180);
  
  servo.write(angle);
  delay(15);

  
  Serial.println(angle);
 

}
