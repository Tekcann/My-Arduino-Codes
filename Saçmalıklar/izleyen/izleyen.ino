#define ensol A0
#define sol A1
#define orta A2
#define sag A3
#define ensag A4
#define on A5

int ensol_s = 0;
int sol_s = 0;
int orta_s = 0;
int sag_s = 0;
int ensag_s = 0;

void setup() {
  Serial.begin(9600);
  

}

void loop() {
   
if(ensol_s >=30 and sol_s >=30 and orta_s <=30 and sag_s >=30 and ensag_s >=30){
   Serial.println("ileri");
   delay(159);

}else if(ensol_s >=30 && sol_s <=30 && orta_s <=30 && sag_s >=30 && ensag_s >=30){
   Serial.println("sol");
   delay(159);

}else if(ensol_s >=30 && sol_s <=30 && orta_s >=30 && sag_s >=30 && ensag_s >=30){
   Serial.println("sol");
   delay(159);

}else if(ensol_s <=30 && sol_s <=30 && orta_s <=30 && sag_s >=30 && ensag_s >=30){
   Serial.println("tam sol");
   delay(159);

}else if(ensol_s <=30 && sol_s <=30 && orta_s >=30 && sag_s >=30 && ensag_s >=30){
   Serial.println("tam sol");
   delay(159);

}else if(ensol_s <=30 && sol_s >=30 && orta_s >=30 && sag_s >=30 && ensag_s >=30){
   Serial.println("Tam sol");
   delay(159);

}else if(ensol_s >=30 && sol_s >=30 && orta_s <=30 && sag_s <=30 && ensag_s >=30){
   Serial.println("sağ");
   delay(159);

}else if(ensol_s >=30 && sol_s >=30 && orta_s >=30 && sag_s <=30 && ensag_s >=30){
   Serial.println("sağ");
   delay(159);
  
}else if(ensol_s >=30 && sol_s >=30 && orta_s <=30 && sag_s <=30 && ensag_s <=30){
   Serial.println(" Tam sağ");
   delay(159);

}else if(ensol_s >=30 && sol_s >=30 && orta_s >=30 && sag_s <=30 && ensag_s <=30){
   Serial.println(" Tam sağ");
   delay(159);

}else if(ensol_s >=30 && sol_s >=30 && orta_s >=30 && sag_s >=30 && ensag_s <=30){
   Serial.println(" Tam sağ");
   delay(159);

}


}
