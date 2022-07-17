// C++ code
//
#include <Servo.h>
int i;
Servo ser;

void setup()
{
 ser.attach(10,600,2400);
}
void loop()
{
  for(i=0;i<=180; i+=1){
    ser.write(i);
    delay(20);}
  for(i=180; i>=0; i-=1){
    ser.write(i);
    delay(20);}
    
    
}