int EnA = 10;
int EnB = 9;
int in1 = 7;
int in2 = 6;
int in3 = 5;
int in4 = 4;

void setup() {
for(int i = 4;i <= 10;i++){
  pinMode(i,OUTPUT);
}


}

void loop() {
  analogWrite(EnA,255);
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  
  analogWrite(EnB,255);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);



}
