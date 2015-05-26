# Attiny85SendSerial

For debugging..

Library: Send Only Software Serial
http://gammon.com.au/Arduino/SendOnlySoftwareSerial.zip

Core: Arduino-tiny core 
https://code.google.com/p/arduino-tiny/


## Pin Configuration

``` c
// ATTINY85 pin
//                               +-\/-+
//                         PB5  1|    |8   VCC
//                         PB3  2|    |7   PB2  (D  2) analogRead(A1)
//                         PB4  3|    |6   PB1  (D  1)        
//                         GND  4|    |5   PB0  (D  0) TX out speed 7200
//                               +----+
```
