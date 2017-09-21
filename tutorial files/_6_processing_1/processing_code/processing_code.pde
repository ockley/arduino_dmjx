import processing.serial.*;

Serial serialPort;
String val;

void setup() {
  //Hvis det ikke virker så prøv med
  // 1, 2 eller 3
  String portName = Serial.list()[7];
  serialPort = new Serial(this, portName, 9600);
}

void draw() {
  if( serialPort.available() > 0) {
    val = serialPort.readStringUntil('\n');
  }
  if(val != null)
  println(val);
}