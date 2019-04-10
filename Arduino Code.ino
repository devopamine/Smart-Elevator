
// We are using pin mode 13 as output and set it to low (OFF) on startup so when we detect a face we will get the command, Y which will trigger the led to glow
  
void setup()
{
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);

  Serial.begin(9600);
}

void loop()
{
  if(Serial.read() == '1')
  {
    digitalWrite(13,HIGH);  
    delay(1000);
    //digitalWrite(13,LOW);
    
  } 

  if(Serial.read() == '2')
  { 
    digitalWrite(12,HIGH); 
    delay(2000);
    //digitalWrite(12,LOW);
  }

  if(Serial.read() == '3')
  { 
    digitalWrite(11,HIGH); 
    delay(3000);
    //digitalWrite(11,LOW);
  }  

  if(Serial.read() == '1' && Serial.read() == '2')
  {
    digitalWrite(13,HIGH);  
    delay(1000);
    digitalWrite(12,HIGH);  
    delay(3000);
    
    //digitalWrite(13,LOW);
    
  } 

  if(Serial.read() == '1' && Serial.read() == '3')
  {
    digitalWrite(13,HIGH);  
    delay(1000);
    digitalWrite(11,HIGH);  
    delay(4000);
    
    //digitalWrite(13,LOW);
    
  } 

  if(Serial.read() == '2' && Serial.read() == '3')
  {
    digitalWrite(12,HIGH);  
    delay(2000);
    digitalWrite(11,HIGH);  
    
    delay(4000);
    
    //digitalWrite(13,LOW);
    
  } 
  

  if(Serial.read() == '1' && Serial.read() == '2' && Serial.read() == '3')
  {
    digitalWrite(13,HIGH);  
    delay(1000);
    digitalWrite(12,HIGH);  
    delay(3000);
    digitalWrite(11,HIGH);  
    delay(5000);
    
    
    //digitalWrite(13,LOW);
    
  } 

   
 }
