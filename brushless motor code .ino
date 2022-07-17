// C++ code
//
#define EN1  7
#define M1A  5
#define M1B  6
void setup()
{
 pinMode(M1A, OUTPUT);
 pinMode(M1B, OUTPUT);
}
void loop()
{
  //clock wise
    digitalWrite(M1A, HIGH);
	digitalWrite(M1B, LOW);
	delay(2000);
  
}