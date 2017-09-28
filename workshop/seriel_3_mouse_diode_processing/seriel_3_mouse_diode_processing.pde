import processing.serial.*;

Serial arduinoPort;
int value = 100;

void setup() {
  String portName = Serial.list()[0]; 
  arduinoPort = new Serial(this, portName, 9600);
  size(800, 600);
}

void draw() {
  // Er der data fra Arduino?
  if (arduinoPort.available() > 0) {
    // Læs ind til linjeskift
    String tmp = arduinoPort.readStringUntil('\n');
    // Test om der har sneget sig en 'null' værdi med
    if (null != tmp) {
      // Fjern whitespace rundt om tallet og overfør til integer
      value = int(tmp.trim());
    }
    // Map musens x position til 0-255
    int outValue = int(map(mouseX, 0, width, 0, 255));
    arduinoPort.write(outValue);
  }
  // Tegn en ellipse med værdien fra arduino
  background(255);
  fill(100, 255, 0);
  ellipse(width/2, height/2, value, value);
}