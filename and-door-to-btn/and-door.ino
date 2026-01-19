int but = 13;
int but1 = 12;


void setup() {
  // put your setup code here, to run once:
pinMode(11,OUTPUT);
pinMode(10,OUTPUT);
pinMode(13,INPUT);
pinMode(12,INPUT);

digitalWrite(11,HIGH);
digitalWrite(10,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:

  if(digitalRead(but) == 1 && digitalRead(but1) == 1){
    digitalWrite(11,LOW);
  }else{
    digitalWrite(11,HIGH);
  }

}