int sure = 50;

void setup() {
 for(int port = 8;port<15;port++){
  pinMode(port,OUTPUT);
 }
}

void loop() {

  for(int i = 8;i < 14;i++){
    
    digitalWrite(i,1);
     delay(sure);
    digitalWrite(i,0);
     delay(sure);
  }
    for(int i = 12;i > 8;i--){
    
    digitalWrite(i,1);
     delay(sure);
    digitalWrite(i,0);
     delay(sure);
  }
}
