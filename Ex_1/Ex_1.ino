
//taula de variables

 const int led1 = 5;
 const int led2 = 6;
 const int led3 = 7;
 const int led4 = 8;
 const int led5 = 9;
 const int led6 = 10;
 const int led7 = 11;
 const int led8 = 12;

void setup()
{
   pinMode(led1, OUTPUT);
   pinMode(led2, OUTPUT);
   pinMode(led3, OUTPUT);
   pinMode(led4, OUTPUT);
   pinMode(led5, OUTPUT);
   pinMode(led6, OUTPUT);
   pinMode(led7, OUTPUT);
   pinMode(led8, OUTPUT);
}
void loop()
{
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);
  digitalWrite(led6, HIGH);
  digitalWrite(led7, HIGH);
  digitalWrite(led8, HIGH);
  
  delay(1000);
  
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  
  delay(1000);
  
 }
  

  
  
