 const int led4 = 5; // definim a quin numero correspont cada pin al arduino
 const int led3 = 3;
 const int led2 = 7;
 const int led1 = 8;

 
void setup()
{
  
   pinMode(led4, OUTPUT);
   pinMode(led3, OUTPUT);
   pinMode(led2, OUTPUT);
   pinMode(led1, OUTPUT);
}
  
void loop()

{
  
  digitalWrite(led4, LOW);    
  digitalWrite(led3, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led1, HIGH);
 
  delay(1000);
  
  digitalWrite(led4, LOW);    
  digitalWrite(led3, LOW);
  digitalWrite(led2, HIGH);
  digitalWrite(led1, LOW);
  
  delay(1000);
  
  digitalWrite(led4, LOW);    
  digitalWrite(led3, HIGH);
  digitalWrite(led2, LOW);
  digitalWrite(led1, HIGH);
  
  delay(1000);
  
  digitalWrite(led4, LOW);    
  digitalWrite(led3, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led1, LOW);
  
  delay(1000);
  
  digitalWrite(led4, LOW);    
  digitalWrite(led3, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led1, HIGH);
  
  delay(1000);
  
  digitalWrite(led4, HIGH);    
  digitalWrite(led3, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led1, LOW);
 
  
  delay(1000);
}
  
