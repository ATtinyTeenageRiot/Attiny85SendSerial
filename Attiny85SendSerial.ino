#include <SendOnlySoftwareSerial.h>

SendOnlySoftwareSerial mySerial (0);  // Tx pin

void setup ()
  {
  mySerial.begin(115200);
  }


void loop ()
{
  if (analogRead(A1) > 20)
  {
  mySerial.println ("BANG!!!!");    
  }
  
  //delay (10);
}
