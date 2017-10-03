import processing.serial.*;

import cc.arduino.*;
import org.firmata.*;

int potPin = 0;
int ledPin = 9;
float value = 0;
float oldValue = 0;

Arduino a;

void setup() {
  size(800, 600);
  a = new Arduino(this, Arduino.list()[0], 57600);
  a.pinMode(ledPin, Arduino.OUTPUT);
  
  //println(Arduino.list());
}

void draw() {
  // Slet baggrund og sæt farver 
  background(255);
  noStroke();
  fill(200, 50, 20);
  
  // Læs fra den analoge port og map
  // det til et tal mellem 0 og 400
  value = a.analogRead(potPin);
  value = map(value, 0, 1023, 0, 400);
  
  // Tegn en cirkel med den mappede værdi
  ellipse(width/2, height/2, value, value);
  delay(5);
  
  // Brug musens x-værdi til at justere LED lyset
  a.analogWrite(ledPin, int(map(mouseX, 0, width, 0, 255)));
}