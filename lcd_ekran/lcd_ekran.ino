#include <LiquidCrystal.h>
//               Rs,E ,D1,D2,D3, D4
LiquidCrystal lcd(9, 8, 7, 6, 5, 4);

void setup() {


  // önce sütun sonra satır
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);  // cursorün nerede duracağını belirler

  //  lcd.println("*merhaba  dunya*"); // tırnak işaretinin içi yazılan aktarılır
}

void loop() {
  for(int i = 0;i<= 15;i+=2) {
   lcd.setCursor(i,0);
   lcd.print("naber");
  delay(500);
  lcd.clear();
 delay(1000);
  }

 
 // lcd.setCursor(0, 0);  karakter kadar sola kaydırır 
 // lcd.autoscroll();     3 karakterli bir kelime varsa
//  lcd.print("ABC");     3 boşluk bırakır tekrar yazar önceki
//  delay(500);           yazıyı siler
}
