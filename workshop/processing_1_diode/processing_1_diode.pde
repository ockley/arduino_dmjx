import processing.serial.*;

import cc.arduino.*;
import org.firmata.*;

int ledPin = 9;

Arduino a;

void setup() {
  a = new Arduino(this, Arduino.list()[0], 57600);
  a.pinMode(ledPin, Arduino.OUTPUT);
  
  //println(Arduino.list());
}

void draw() {  
    a.digitalWrite(ledPin, Arduino.HIGH);
     delay(1000);
    a.digitalWrite(ledPin, Arduino.LOW);
    delay(1000);
}