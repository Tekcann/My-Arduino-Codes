void setup() {
  pinMode(A1,INPUT);
  pinMode(9,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  int isik = analogRead(A1);
  Serial.println(isik);
  
  if(isik < 50){
    digitalWrite(9,HIGH);


  }else{
    digitalWrite(9,LOW);
  }
  
    
  

}
