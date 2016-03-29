#include <SendOnlySoftwareSerial.h>

SendOnlySoftwareSerial mySerial (PB0);  // Tx pin

void setup ()
  {
  mySerial.begin(115200);
  pinMode(PB1, OUTPUT);

  digitalWrite(PB1, HIGH);
  delay(10);  
  digitalWrite(PB1, LOW);
  delay(10);  
  digitalWrite(PB1, HIGH);
  delay(10);  
  digitalWrite(PB1, LOW);
  delay(10);  
  digitalWrite(PB1, HIGH);
  delay(10);  
  digitalWrite(PB1, LOW);
  delay(10);  
  digitalWrite(PB1, HIGH);
  delay(10);  
  digitalWrite(PB1, LOW);
  

}


void loop ()
{
  if (analogRead(A1) > 20)
  {
  mySerial.println ("BANG!!!!");    
    digitalWrite(PB1, HIGH);
    delay(25);
  }else{
    digitalWrite(PB1, LOW);
 
  }
  
  //delay (10);
}
