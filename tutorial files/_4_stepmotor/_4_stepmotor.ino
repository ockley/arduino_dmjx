/* 
 * BRGB
 * Denne skitse styrer en servo motor
 * https://learn.adafruit.com/adafruit-arduino-lesson-14-servo-motors
 */

#include <Servo.h>

int servoPin = 9;

Servo servo;

int angle = 0;

void setup() {
  //Forbind til servo
  servo.attach(servoPin);  
}

void loop() {
  
 // bevæg fra 0 til 180 grader
 for (angle = 0; angle < 180; angle++ ) {
  servo.write(angle);
  delay(15);
 }
 
 // bevæg fra 180 til 0 grader
 for (angle = 180; angle > 0; angle-- ) {
  servo.write(angle);
  delay(15);
 }
 

}
