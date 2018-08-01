char decode;
void setup()
{
Serial.begin(9600);
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
}
void loop()
{
if(Serial.available())
{
decode=Serial.read();
Serial.println(decode);
delay(100);
}

if (decode == ‘A’)
{
digitalWrite(8,HIGH);
digitalWrite(9,LOW);
digitalWrite(10,HIGH);
digitalWrite(11,LOW);
delay(100);
}
else if (decode == ‘B’)
{
digitalWrite(8,LOW);
digitalWrite(9,HIGH);
digitalWrite(10,LOW);
digitalWrite(11,HIGH);
delay(100);

}
else if (decode == ‘D’)
{
digitalWrite(8,LOW);
digitalWrite(9,LOW);
digitalWrite(10,HIGH);
digitalWrite(11,LOW);
delay(100);
}
else if (decode == ‘C’)
{
digitalWrite(8,HIGH);
digitalWrite(9,LOW);
digitalWrite(10,LOW);
digitalWrite(11,LOW);
delay(100);
}
else if (decode == ‘E’)
{
digitalWrite(8,LOW);
digitalWrite(9,LOW);
digitalWrite(10,LOW);
digitalWrite(11,LOW);
delay(100);
}

else if(decode==’F’)
{

digitalWrite(8,HIGH);
digitalWrite(9,LOW);
digitalWrite(10,LOW);
digitalWrite(11,HIGH);
delay(100);

}

else if(decode==’G’)
{

digitalWrite(8,LOW);
digitalWrite(9,HIGH);
digitalWrite(10,HIGH);
digitalWrite(11,LOW);
delay(100);

}
}
