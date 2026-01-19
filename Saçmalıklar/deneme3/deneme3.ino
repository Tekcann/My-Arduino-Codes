

#include <LiquidCrystal.h>

//                 RS, en, D4, D5, D6, D7
 LiquidCrystal lcd( 9 , 8 , 5 , 4 , 3 , 2 );
int but1 = 13;
int but2 = 12;
int ledy = 11;
int ledr = 10;  

void setup() {
  pinMode(but1,INPUT);  //pinler tanımlandı 
  pinMode(but2,INPUT);
  pinMode(ledy,OUTPUT);
  pinMode(ledr,OUTPUT);

  // önce sütün sonra satır
  lcd.begin(16,2);
  lcd.setCursor(15,0);
  lcd.print("dogru yanlıs oyunu");
  for(int i = 15;i>= 0;i+=2) {
    
   lcd.setCursor(i,0);
   lcd.print("dogru yanlis oyunu");
  delay(500);
  lcd.clear();
 delay(500);
  
  }
}

void loop() {

     if(digitalRead(but1) == 1 ){ 
      lcd.setCursor(0,0);

      lcd.print("oyun deneme");  //lcd ekranına yazı yazar

   
     }

 


}
