int sensorPin = A0;
int ledPin = 9;
int sensorValue =0;
int fadeValue = 1023;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  sensorValue = analogRead(sensorPin);
  if( sensorValue <= fadeValue){
    fadeValue +=5;
    analogWrite(ledPin, fadeValue);
    delay(300);
  }else{
    fadeValue -=5;
    analogWrite(ledPin, fadeValue);
    delay(300);
  }
}
