int sensorPin = A0;
int sensorValue = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  sensorValue = analogRead(sensorPin);
  if(sensorValue>=0 && sensorValue <= 200){
    digitalWrite(12, LOW);
    digitalWrite(13, HIGH);
    delay(sensorValue);
  }else if(sensorValue >=201 && sensorValue <=400){
    digitalWrite(13, LOW);
    digitalWrite(12, HIGH);
    digitalWrite(11, LOW);
    delay(sensorValue);
  }else if(sensorValue >=401 && sensorValue <=600){
    digitalWrite(12, LOW);
    digitalWrite(11, HIGH);
    digitalWrite(10, LOW);
    delay(sensorValue);
  }else if(sensorValue >=601 && sensorValue <=800){
    digitalWrite(11, LOW);
    digitalWrite(10, HIGH);
    digitalWrite(9, LOW);
    delay(sensorValue);
  }else if(sensorValue >800){
    digitalWrite(10, LOW);
    digitalWrite(9, HIGH);
    delay(sensorValue);
  }
}
