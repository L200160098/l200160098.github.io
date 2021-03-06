int potPin = A0;
int motorPin = 13;
int ledPin = 12;
int ledPin2 = 11;
int ledPin3 = 10;
int ledPin4 = 9;
int ledPin5 = 8;
int ledPin6 = 7;
int ledPin7 = 6;
int potValue = 0;
int motorValue = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(ledPin5, OUTPUT);
  pinMode(ledPin6, OUTPUT);
  pinMode(ledPin7, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  potValue = analogRead(potPin);
  motorValue = map(potValue, 0, 1023, 0, 255);
  if(motorValue >= 0 && motorValue <= 36){
    digitalWrite(ledPin, HIGH);
    digitalWrite(ledPin2, LOW);
  }else if(motorValue >= 36 && motorValue <= 72){
    digitalWrite(ledPin, LOW);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, LOW);
  }else if(motorValue >= 72 && motorValue <= 108){
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, HIGH);
    digitalWrite(ledPin4, LOW);      
  }else if(motorValue >= 108 && motorValue <= 144){
    digitalWrite(ledPin3, LOW);
    digitalWrite(ledPin4, HIGH);
    digitalWrite(ledPin5, LOW);
  }else if(motorValue >= 144 && motorValue <= 180){
    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin5, HIGH);
    digitalWrite(ledPin6, LOW);
  }else if(motorValue >= 180 && motorValue <= 216){
    digitalWrite(ledPin5, LOW);
    digitalWrite(ledPin6, HIGH);
    digitalWrite(ledPin7, LOW);
  }else if(motorValue >= 216 && motorValue <= 255){
    digitalWrite(ledPin6, LOW);
    digitalWrite(ledPin7, HIGH);
  }
  analogWrite(motorPin, motorValue);
  delay(2);
}
