#define but  13
#define led  12
int sure = 1000;
void setup() {
   
  pinMode(but,INPUT);
  pinMode(led,OUTPUT);


}

void loop() {
  if(digitalRead(but) == 1){
   for(int sure = 1000; sure > 100;){    
    digitalWrite(led,1);
    delay(sure);
    digitalWrite(led,0);
    delay(sure);
    sure = sure - 100;
      
       }

  }




}
