#define enA 10
#define enB 9
#define in3 3
#define in4 2
#define in2 4
#define in1 5
void setup() {
 pinMode(in3,OUTPUT);
 pinMode(in4,OUTPUT); 
 pinMode(enA,OUTPUT);
 pinMode(in1,OUTPUT);
 pinMode(in2,OUTPUT);
 pinMode(enB,OUTPUT);
}

void loop() {
  
  digitalWrite(enB,HIGH);
  analogWrite(enB,255);
  digitalWrite(in4,HIGH);
  digitalWrite(in3,LOW);

  digitalWrite(enA,HIGH);
  analogWrite(enA,255);
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);

}
