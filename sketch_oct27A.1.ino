void setup() {
  pinMode(13, OUTPUT);  
  pinMode(7, INPUT); 
  digitalWrite(7, HIGH); 
}

void loop() {
  int switchState = digitalRead(7); // read the state of the switch
  
  if (switchState == LOW) {
    // turn on the LED
    digitalWrite(13, HIGH);
  } else {
    // turn off the LED
    digitalWrite(13, LOW);
  }
}

