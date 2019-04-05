int potPin = A0;
int sensorValue = 0;
int LedValue = 0;
int val[] = {B11000000,B11111001,B10100100,B10110000,B10011001,B10010010,B10000010,B11111000,B10000000,B10010000};

void setup() {
  // put your setup code here, to run once:
  DDRD = B11111111;
}

void loop() {
  // put your main code here, to run repeatedly:
  sensorValue = analogRead(potPin);
  LedValue = map(sensorValue, 0, 1023, 0, 1023);
  if(sensorValue <= 100){
    PORTD = val[0];  
  }else if(sensorValue >= 101 && sensorValue <= 200){
    PORTD = val[1];  
  }else if(sensorValue >= 201 && sensorValue <= 300){
    PORTD = val[2];  
  }else if(sensorValue >= 301 && sensorValue <= 400){
    PORTD = val[3];  
  }else if(sensorValue >= 401 && sensorValue <= 500){
    PORTD = val[4];  
  }else if(sensorValue >= 501 && sensorValue <= 600){
    PORTD = val[5];  
  }else if(sensorValue >= 601 && sensorValue <= 700){
    PORTD = val[6];  
  }else if(sensorValue >= 701 && sensorValue <= 800){
    PORTD = val[7];  
  }else if(sensorValue >= 801 && sensorValue <= 900){
    PORTD = val[8];  
  }else if(sensorValue >= 901 && sensorValue <= 1023){
    PORTD = val[9];  
  }
}
