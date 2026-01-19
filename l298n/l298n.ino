void setup() {
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(6,OUTPUT);


}

void loop() {
 digitalWrite(9,LOW);
 digitalWrite(8,LOW);
 
for(int i = 0;i<255;i++){
  analogWrite(6,i);
  delay(10);
}
for(int i = 255;i>=0;i--){
  analogWrite(6,i);
  delay(10);
}

}
