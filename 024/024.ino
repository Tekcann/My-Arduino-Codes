int port[4] = {8,9,10,11};
int sure = 250;

void setup() {
  for(int a = 0;a < 4; a++ ){
  pinMode(port[a],OUTPUT); 
  
  }
 

}

void loop() {
  for(int i = 0;i < 4;i++){
    digitalWrite(port[i],HIGH);
  }
        delay(sure);
  for(int i = 0;i<4;i++){
    digitalWrite(port[i],LOW);
  }
       delay(sure);
}
