/*
IOT & Embedded System
Gopal Wagh
Web:- https://iotandembeddedsystem.blogspot.com/2019/11/iot-embedded-source-code-with-hardware.html?m=1
Insta:-https://instagram.com/__i__o__t__?igshid=1do5vrbmpdlit
*/


void setup()
{
pinMode(13,OUTPUT);
pinMode(12,OUTPUT);
pinMode(11,OUTPUT);
}

void loop() 
{
digitalWrite(13,HIGH);
delay(100);
digitalWrite(13,LOW);
delay(100);


digitalWrite(12,HIGH);
delay(100);
digitalWrite(12,LOW);
delay(100);


digitalWrite(11,HIGH);
delay(100);
digitalWrite(11,LOW);
delay(100);
}
