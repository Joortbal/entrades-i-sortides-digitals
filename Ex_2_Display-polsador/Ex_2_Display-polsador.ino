 const int ledA = 7;  //Definim a quin pin correspon cda element 
 const int ledB = 8;
 const int ledC = 9;
 const int ledD = 10;
 const int ledE = 11;
 const int ledF = 12;
 const int ledG = 13;
 const int polsador = 2; 
 boolean polsadorEstat = LOW; // estat inicial del polsador
 int num = 0;
 
void setup()
{
  
   pinMode(ledA, OUTPUT);     //definim si son entrades o sortides
   pinMode(ledB, OUTPUT);
   pinMode(ledC, OUTPUT);
   pinMode(ledD, OUTPUT);
   pinMode(ledE, OUTPUT);
   pinMode(ledF, OUTPUT);
   pinMode(ledG, OUTPUT);
   pinMode(polsador, INPUT);
   
  digitalWrite(ledA, LOW);     //resetegem totes les sortides al inici del programa
  digitalWrite(ledB, LOW);
  digitalWrite(ledC, LOW);
  digitalWrite(ledD, LOW);
  digitalWrite(ledE, LOW);
  digitalWrite(ledF, LOW);
  digitalWrite(ledG, LOW);
   
   
}
void loop()
{
  delay(500); // per evitar que una polsació curta salti més d'un número
  polsadorEstat= digitalRead(polsador);
  
  if(polsadorEstat == HIGH)
  {
   num =num + 1;
    if(num == 10) num = 0;   //per tornar a 0 s'hi s'arriba al 9
 
  }
 switch(num)
 
 {
 
 case 0: 
 
  digitalWrite(ledA, HIGH);    // 0//
  digitalWrite(ledB, HIGH);
  digitalWrite(ledC, HIGH);
  digitalWrite(ledD, HIGH);
  digitalWrite(ledE, HIGH);
  digitalWrite(ledF, HIGH);
  digitalWrite(ledG, LOW);
  break;

  
  case 1:
  
  digitalWrite(ledA, LOW);     // 1//
  digitalWrite(ledB, HIGH);
  digitalWrite(ledC, HIGH);
  digitalWrite(ledD, LOW);
  digitalWrite(ledE, LOW);
  digitalWrite(ledF, LOW);
  digitalWrite(ledG, LOW);
  break;
  
  case 2:
  
  digitalWrite(ledA, HIGH);   //2//
  digitalWrite(ledB, HIGH);
  digitalWrite(ledC, LOW);
  digitalWrite(ledD, HIGH);
  digitalWrite(ledE, HIGH);
  digitalWrite(ledF, LOW);
  digitalWrite(ledG, HIGH);
   break;
  
  
  case 3:
  
  digitalWrite(ledA, HIGH);    // 3 //
  digitalWrite(ledB, HIGH);
  digitalWrite(ledC, HIGH);
  digitalWrite(ledD, HIGH);
  digitalWrite(ledE, LOW);
  digitalWrite(ledF, LOW);
  digitalWrite(ledG, HIGH);
  break;
  
  
  case 4:
  
  digitalWrite(ledA, LOW);   // 4//
  digitalWrite(ledB, HIGH);
  digitalWrite(ledC, HIGH);
  digitalWrite(ledD, LOW);
  digitalWrite(ledE, LOW);
  digitalWrite(ledF, HIGH);
  digitalWrite(ledG, HIGH);
  break;
  
  
  case 5:
  
  digitalWrite(ledA, HIGH);  // 5 //
  digitalWrite(ledB, LOW);
  digitalWrite(ledC, HIGH);
  digitalWrite(ledD, HIGH);
  digitalWrite(ledE, LOW);
  digitalWrite(ledF, HIGH);
  digitalWrite(ledG, HIGH);
  break;
  
  case 6:
  
  digitalWrite(ledA, LOW);   // 6 //
  digitalWrite(ledB, LOW);
  digitalWrite(ledC, HIGH);
  digitalWrite(ledD, HIGH);
  digitalWrite(ledE, HIGH);
  digitalWrite(ledF, HIGH);
  digitalWrite(ledG, HIGH);
   break;
  
  
  case 7:
  
  digitalWrite(ledA, HIGH);  // 7 //
  digitalWrite(ledB, HIGH);
  digitalWrite(ledC, HIGH);
  digitalWrite(ledD, LOW);
  digitalWrite(ledE, LOW);
  digitalWrite(ledF, LOW);
  digitalWrite(ledG, LOW);
  break;
  
  
  case 8:
  
  digitalWrite(ledA, HIGH);  // 8 //
  digitalWrite(ledB, HIGH);
  digitalWrite(ledC, HIGH);
  digitalWrite(ledD, HIGH);
  digitalWrite(ledE, HIGH);
  digitalWrite(ledF, HIGH);
  digitalWrite(ledG, HIGH);
  break;
  
  case 9:
  
  digitalWrite(ledA, HIGH);  // 9 //
  digitalWrite(ledB, HIGH);
  digitalWrite(ledC, HIGH);
  digitalWrite(ledD, HIGH);
  digitalWrite(ledE, LOW);
  digitalWrite(ledF, HIGH);
  digitalWrite(ledG, HIGH);
  break;
  
 }
 }
  
