#include <SoftwareSerial.h>
SoftwareSerial mySerial(10,11);
void setup()
{
Serial.begin(4800);
mySerial.begin(4800); 
Serial.println("In Comm 8");
}
void loop() 
{
while(mySerial.available())
{
	String incomingByte = mySerial.readString();
  	Serial.print("B : ");   
	Serial.println(incomingByte);   
}
while(Serial.available())
{
	String incomingByte = Serial.readString();   
    mySerial.print(incomingByte);
  	Serial.print("Me : ");
    Serial.println(incomingByte);
}
}