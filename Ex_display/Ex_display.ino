 const int ledA = 7;
 const int ledB = 8;
 const int ledC = 9;
 const int ledD = 10;
 const int ledE = 11;
 const int ledF = 12;
 const int ledG = 13;
 
void setup()
{
  
   pinMode(ledA, OUTPUT);
   pinMode(ledB, OUTPUT);
   pinMode(ledC, OUTPUT);
   pinMode(ledD, OUTPUT);
   pinMode(ledE, OUTPUT);
   pinMode(ledF, OUTPUT);
   pinMode(ledG, OUTPUT);
}
void loop()
{
  
  digitalWrite(ledA, HIGH);    // 0//
  digitalWrite(ledB, HIGH);
  digitalWrite(ledC, HIGH);
  digitalWrite(ledD, HIGH);
  digitalWrite(ledE, HIGH);
  digitalWrite(ledF, HIGH);
  digitalWrite(ledG, LOW);
  
  delay(1000);
  
  digitalWrite(ledA, LOW);     // 1//
  digitalWrite(ledB, HIGH);
  digitalWrite(ledC, HIGH);
  digitalWrite(ledD, LOW);
  digitalWrite(ledE, LOW);
  digitalWrite(ledF, LOW);
  digitalWrite(ledG, LOW);
  
  delay(1000);
  
   digitalWrite(ledA, HIGH);   //2//
  digitalWrite(ledB, HIGH);
  digitalWrite(ledC, LOW);
  digitalWrite(ledD, HIGH);
  digitalWrite(ledE, HIGH);
  digitalWrite(ledF, LOW);
  digitalWrite(ledG, HIGH);
  
  delay(1000);
  
  digitalWrite(ledA, HIGH);    // 3 //
  digitalWrite(ledB, HIGH);
  digitalWrite(ledC, HIGH);
  digitalWrite(ledD, HIGH);
  digitalWrite(ledE, LOW);
  digitalWrite(ledF, LOW);
  digitalWrite(ledG, HIGH);
  
  delay(1000);
  
   digitalWrite(ledA, LOW);   // 4//
  digitalWrite(ledB, HIGH);
  digitalWrite(ledC, HIGH);
  digitalWrite(ledD, LOW);
  digitalWrite(ledE, LOW);
  digitalWrite(ledF, HIGH);
  digitalWrite(ledG, HIGH);
  
  delay(1000);
  
  digitalWrite(ledA, HIGH);  // 5 //
  digitalWrite(ledB, LOW);
  digitalWrite(ledC, HIGH);
  digitalWrite(ledD, HIGH);
  digitalWrite(ledE, LOW);
  digitalWrite(ledF, HIGH);
  digitalWrite(ledG, HIGH);
  
  delay(1000);
  
  digitalWrite(ledA, LOW);   // 6 //
  digitalWrite(ledB, LOW);
  digitalWrite(ledC, HIGH);
  digitalWrite(ledD, HIGH);
  digitalWrite(ledE, HIGH);
  digitalWrite(ledF, HIGH);
  digitalWrite(ledG, HIGH);
  
  delay(1000);
  
  digitalWrite(ledA, HIGH);  // 7 //
  digitalWrite(ledB, HIGH);
  digitalWrite(ledC, HIGH);
  digitalWrite(ledD, LOW);
  digitalWrite(ledE, LOW);
  digitalWrite(ledF, LOW);
  digitalWrite(ledG, LOW);
  
  delay(1000);
  
  digitalWrite(ledA, HIGH);  // 8 //
  digitalWrite(ledB, HIGH);
  digitalWrite(ledC, HIGH);
  digitalWrite(ledD, HIGH);
  digitalWrite(ledE, HIGH);
  digitalWrite(ledF, HIGH);
  digitalWrite(ledG, HIGH);
  
  delay(1000);
  
  digitalWrite(ledA, HIGH);  // 9 //
  digitalWrite(ledB, HIGH);
  digitalWrite(ledC, HIGH);
  digitalWrite(ledD, HIGH);
  digitalWrite(ledE, LOW);
  digitalWrite(ledF, HIGH);
  digitalWrite(ledG, HIGH);
  
  delay(1000);
  
  
  
  
  
  
  
  
  
  
 }
