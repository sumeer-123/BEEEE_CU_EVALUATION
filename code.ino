int i;

void setup()
{
  for (i=2; i<8; i++)
    pinMode(i,OUTPUT);
  pinMode(13,INPUT);
  pinMode(12,INPUT);
  Serial.begin(9600);
}

void LEDoff(){
  for(int j=2;j<8;j++)
    digitalWrite(j,LOW);
}

void loop()
{
  int l=analogRead(A0);
  if(l>900){
    if(digitalRead(13)==HIGH){
  for(i=2;i<8;){
    digitalWrite(i,HIGH);
    i=i+2;
  }
  delay(500);
  LEDoff();
  for(i=3;i<8;){
    digitalWrite(i,HIGH);
    i=i+2;
  }
  delay(500);
  LEDoff();
  }
  else if(digitalRead(12)==HIGH){
  for (i=2;i<8;i++) {
      
    
    digitalWrite(i,HIGH);
    if(i!=7) {
      digitalWrite(i+1,HIGH);
    }
    else {
      digitalWrite(2,HIGH);
    }
    delay(250);
    LEDoff();
    delay(250);
  }
  }
  }
}
