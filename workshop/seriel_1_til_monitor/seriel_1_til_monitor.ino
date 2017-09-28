int buttonPin = 2;

void setup() {
  pinMode(buttonPin, INPUT);

  //Åbn en seriel forbindelse
  Serial.begin(9600);
}

void loop() {

  if(digitalRead(buttonPin) == HIGH) {
    Serial.println("Der bliver trykket!");
  }
}
