import processing.serial.*;

Serial arduinoPort;
int value = 100;

void setup() {
  // Skriv 1,2,3 osv. for at finde den rigtige port

  String portName = Serial.list()[0]; 
  arduinoPort = new Serial(this, portName, 9600);

  //println(Serial.list());
  String portName = Serial.list()[0]; // Skriv 1,2,3 osv. for at finde den rigtige port
  arduinoPort = new Serial(this, portName, 9600);

  //println(Serial.list());

  size(800, 600);
}

void draw() {
  // læs data fra serielproten, hvis der er nogle
  if (arduinoPort.available() > 0) {
    // Læs ind til linjeskift
    String tmp = arduinoPort.readStringUntil('\n');
    // Test om der har sneget sig en 'null' værdi med
    if (null != tmp) {

      // Fjern whitespace rundt om tallet og overfør til integer
      value = int(tmp.trim());
    }
    println(tmp, value);
  }
  // Tegn en ellipse med værdien fra arduino
  background(255);
  fill(100, 255, 0);
  ellipse(width/2, height/2, value, value);
}