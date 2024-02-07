char reading=0;
void setup()
{
 pinMode(2,0);
  pinMode(7,0);
  Serial.begin(9600);
  
}

void loop()
{
  if (Serial.available()){
     reading=Serial.read();
  }
  if (digitalRead(2)==1 || reading=='r'){
  
  analogWrite(3,analogRead(A5)/4);
  }else  {
  
  analogWrite(3,255);
  
  }
  if (digitalRead(7)==1 || reading=='l'){
  analogWrite(5,analogRead(A4)/4);
    
  
  }else {
  
  analogWrite(5,255);
  }
  
  
  
  
  
}