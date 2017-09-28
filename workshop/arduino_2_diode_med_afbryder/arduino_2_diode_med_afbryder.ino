

int ledPin = 8;     // diode port
int buttonPin = 9; // knap port
int state = 0;      // knap tilstand

void setup() {
  // Skift portenes tilstande til OUTPUT og INPUT
  pinMode(ledPin, OUTPUT);
  pinMode(butttonPin, INPUT);
}

void loop() {
  // Læs porten for afbryderen
  state = digitalRead(buttonPin);

  // Test om knappen er nede eller ej
  if(state == HIGH) {
    //Tænd for dioden
    digitalWrite(ledPin, HIGH);    
  } else {
    Sluk for dioden
    digitalWrite(ledPin, LOW);  
  }
}
