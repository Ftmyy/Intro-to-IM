// variables
int led1= 11;
int led2= 12;
int switchPin= 7;

void setup() {
Serial.begin(9600);

pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(switchPin,INPUT);
}

void loop() {
// led 1 (analog)
int sensorValue= analogRead(A2);
Serial.println(sensorValue);
analogWrite(led1, sensorValue/4);
// led 2 (digital)
int switchState = digitalRead(switchPin);
digitalWrite(led2, switchState);
}
