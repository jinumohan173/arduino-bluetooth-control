#include<LiquidCrystal.h>
LiquidCrystal lcd(2,12,11,10,9,8);
int b=0;
void setup() {
  lcd.begin(16,2);
Serial.begin(9600);
Serial3.begin(9600);
pinMode(7,OUTPUT);
pinMode(17,OUTPUT);
pinMode(6,OUTPUT);
pinMode(16,OUTPUT);
pinMode(5,OUTPUT);
pinMode(4,OUTPUT);
pinMode(3,OUTPUT);
}


void loop() {
  if(Serial.available())
  {
    char a=Serial.read();
    if(a=='1')
    {
      fruitmotor();
      checkfruit();
     
//      lcd.print("FRUIT MOTOR ON");
//    delay(1000);
//    lcd.clear();
    if(b==1)
    {

        lcd.setCursor(0,0);
       lcd.print("1 GLASS       ");
    delay(1000);
          crush(1000);
    lcd.clear();
    b=0;
      }
    }
    else if(a=='2')
    {
      fruitmotor();
      checkfruit();
      fruitmotor();
      checkfruit();
//      lcd.print("FRUIT MOTOR ON");
//    delay(1000);
//    lcd.clear();
        if(b==2)
    {
    
        lcd.setCursor(0,0);
       lcd.print("2 GLASS        ");
    delay(1000);
      crush(2000);
    lcd.clear();
    b=0;
      }
      }
    else if(a=='3')
    {
      fruitmotor();
      checkfruit();
            fruitmotor();
            checkfruit();
      fruitmotor();
      checkfruit();
 
    if(b==3)
    {
    
        lcd.setCursor(0,0);
       lcd.print("3 GLASS         ");
    delay(1000);
      crush(3000);
    lcd.clear();
    b=0;
    
      }
      }      
    }
   
   
}


void fruitmotor()
{
  
   lcd.setCursor(0,0);
       lcd.print("FRUIT MOTOR ON");
    delay(1000);
    digitalWrite(7,HIGH);
     digitalWrite(17,LOW);
  delay(200);
  digitalWrite(7,LOW);
digitalWrite(17,HIGH);
 delay(270);
  digitalWrite(7,LOW);
digitalWrite(17,LOW);
    lcd.clear();
    }

void goodfruit()
{
    
   lcd.setCursor(0,0);
       lcd.print("GOOD FRUIT     ");
    delay(1000);
    digitalWrite(6,HIGH);
        digitalWrite(16,LOW);
  delay(150);
  digitalWrite(6,LOW);
  
        digitalWrite(16,HIGH);
 delay(150);
 
 digitalWrite(6,LOW);
        digitalWrite(16,LOW);
     lcd.clear();
  
  }

  void checkfruit()
  {
    if(Serial3.available())
    {
      char a=Serial3.read();
      if(a=='1')
      {
        
        goodfruit();
            b=b+1;
        }
        else if(a=='2') 
        {
         
       lcd.setCursor(0,0);
          lcd.print("BAD FRUIT       ");
    delay(1000);
    lcd.clear();
     digitalWrite(6,LOW);
  
        digitalWrite(16,HIGH);
 delay(150);
  digitalWrite(6,HIGH);
        digitalWrite(16,LOW);
  delay(150);
  digitalWrite(6,LOW);
        digitalWrite(16,LOW);
     fruitmotor();
     checkfruit();
          }
          else
          {
            checkfruit();
          }
         
      
      }
      else
      {
        checkfruit();
        } 
    }
  void crush(int a)
  {
      digitalWrite(4,HIGH);  
      digitalWrite(3,HIGH);
  delay(a);
  digitalWrite(4,LOW);
       digitalWrite(3,LOW);
          delay(2000);
      digitalWrite(5,HIGH);
  delay(a);
  digitalWrite(5,LOW);

    }
