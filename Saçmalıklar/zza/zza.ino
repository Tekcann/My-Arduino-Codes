#include <LiquidCrystal.h>
 //  LiquidCrystal lcd
  LiquidCrystal lcd(9,8,7,6,5,4);


int trig = 11;
int echo =12;


void setup() {
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  lcd.begin(16,2);
  lcd.setCursor(0,0);void setup() {
    pinMode(2,OUTPUT);
}

void loop() {


    digitalWrite(2,HIGH);
    delay(1000);
    digitalWrite(2,LOW);
    delay(1000);

}
  lcd.print("mesafe");

}

void loop() {
  lcd.setCursor(0,1);
    int sure,mesafe;
    digitalWrite(trig,LOW);
    delayMicroseconds(2);
    digitalWrite(trig,HIGH);
    delayMicroseconds(10);
    digitalWrite(trig,LOW);
    
  sure = pulseIn(echo,HIGH);
  mesafe =(sure/2) / 29.1;

   
   lcd.print(mesafe);
   delay(500);
   lcd.clear();
   delay(500);
}