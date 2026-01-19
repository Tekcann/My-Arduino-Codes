#define ensol 7
#define sol 6
#define orta 5
#define sag 4
#define ensag 3
#define on 2

int ensol_s;
int sol_s;
int orta_s;
int sag_s;
int ensag_s;

void setup() {
for(int i = 2;i <=7;i++){
  pinMode(i,INPUT);
}
  Serial.begin(9600);



}

void loop() {
   ensag_s = digitalRead(ensag);
   sag_s = digitalRead(sag);
   orta_s = digitalRead(orta);
   sol_s = digitalRead(sol);
   ensol_s = digitalRead(ensol);


 if(ensol_s == 1 && sol_s==1 && orta_s==0 && sag_s==1 && ensag_s ==1){
  Serial.println("ileri");
  delay(150);
 }else if(ensol_s == 1 && sol_s==0 && orta_s==0 && sag_s==1 && ensag_s ==1){
  Serial.println("sol");
  delay(150);

 }else  if(ensol_s == 1 && sol_s==0 && orta_s==1 && sag_s==1 && ensag_s ==1){
  Serial.println("sol");
  delay(150);

 }else  if(ensol_s ==0 && sol_s==0 && orta_s==0 && sag_s==1 && ensag_s ==1){
  Serial.println("EN sol");
  delay(150);

 }else  if(ensol_s ==0 && sol_s==0 && orta_s==1 && sag_s==1 && ensag_s ==1){
  Serial.println("EN sol");
  delay(150);

 }else if(ensol_s ==0 && sol_s==1 && orta_s==1 && sag_s==1 && ensag_s ==1){
  Serial.println("EN sol");
  delay(150);

 }else  if(ensol_s ==1 && sol_s==1 && orta_s==0 && sag_s==0 && ensag_s ==1){
  Serial.println("sağ");
  delay(150);
 
 }else  if(ensol_s ==1 && sol_s==1 && orta_s==1 && sag_s==0 && ensag_s ==1){
  Serial.println("sağ");
  delay(150);
 
 }else  if(ensol_s ==1 && sol_s==1 && orta_s==0 && sag_s==0 && ensag_s ==0){
  Serial.println("EN sağ");
  delay(150);
 
 }else  if(ensol_s ==1 && sol_s==1 && orta_s==1 && sag_s==0 && ensag_s ==0){
  Serial.println("EN sağ");
  delay(150);

 }else  if(ensol_s ==1 && sol_s==1 && orta_s==1 && sag_s==1 && ensag_s ==0){
  Serial.println("EN sağ");
  delay(150);
  
 }
}


void deger(){
  
  ensag_s = digitalRead(ensag);
  Serial.print(" enSağ : ");
  Serial.print(sag_s);

  sag_s = digitalRead(sag);
  Serial.print(" Sağ Sensor: ");
  Serial.print(sag_s);

  orta_s = digitalRead(orta);
  Serial.print(" Orta Sensor: ");
  Serial.print(orta_s);  

  sol_s = digitalRead(sol);
  Serial.print(" Sol Sensor: ");
  Serial.print(sol_s);  

  ensol_s = digitalRead(ensol);
  Serial.print(" ensol :  ");
  Serial.println(ensol_s);
  delay(1000);
}