import processing.serial.*;

import cc.arduino.*;
import org.firmata.*;

int buttonPin = 2;
int ledPin = 9;
int state = 0;

Arduino a;

void setup() {
  a = new Arduino(this, Arduino.list()[0], 57600);
  
  a.pinMode(buttonPin, Arduino.INPUT);
  a.pinMode(ledPin, Arduino.OUTPUT);
  
  //println(Arduino.list());
}

void draw() {
  state = a.digitalRead(buttonPin);
  
  if(state == Arduino.HIGH) {
    a.digitalWrite(ledPin, Arduino.HIGH);
  } else {
    a.digitalWrite(ledPin, Arduino.LOW);
  }
}