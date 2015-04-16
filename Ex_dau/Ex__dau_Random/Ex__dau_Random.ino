 const int led4 = 5; // definim a quin numero correspont cada pin al arduino
 const int led3 = 3;
 const int led2 = 7;
 const int led1 = 8;
 const int polsador = 2; 
 boolean polsadorEstat = LOW; // estat inicial del polsador
 int num = 0;
 
void setup()
{
  
   pinMode(led4, OUTPUT);
   pinMode(led3, OUTPUT);
   pinMode(led2, OUTPUT);
   pinMode(led1, OUTPUT);
   pinMode(polsador, INPUT);
   
   digitalWrite(led4, LOW); // posar a 0V a tots els pins al inici
   digitalWrite(led3, LOW);
   digitalWrite(led2, LOW); 
   digitalWrite(led1, LOW); 
}

void loop()
{
   polsadorEstat = digitalRead(polsador);
   
   if (polsadorEstat == LOW)
{
   num = random(1,7);
   digitalWrite(led4,LOW);
   digitalWrite(led3,LOW);
   digitalWrite(led2,LOW);
   digitalWrite(led1,LOW);
}
switch(num)
{
  case 1:
   digitalWrite(led1, HIGH); // mostrar el 1
   
 case 2:
   digitalWrite(led2, HIGH); // mostrar el 2
   break;
   
 case 3:
   digitalWrite(led1, HIGH); // mostrar el 3
   digitalWrite(led3, HIGH);
   break;
   
 case 4:
  digitalWrite(led2, HIGH); // mostrar el 4
  digitalWrite(led3, HIGH);
  break;
  
 case 5:
  digitalWrite(led2, HIGH); // mostrar el 5
  digitalWrite(led3, HIGH);
  digitalWrite(led1, HIGH);
  break;
  
 case 6:
  digitalWrite(led2, HIGH); // mostrar el 6
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
 break;
}
}
