#define trig 11
#define echo 10
#define in3 4
#define in4 2
#define en 3
long mesafe;
long sure;

void setup() {
  Serial.begin(9600);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);


}

void loop() {
  digitalWrite(en,HIGH);
  analogWrite(en,255);


  digitalWrite(trig,LOW);
  delayMicroseconds(2);

  digitalWrite(trig,HIGH);
  delayMicroseconds(10);

  digitalWrite(trig,LOW);

  sure = pulseIn(echo,HIGH);
  mesafe = (sure/2)/29.1;

  Serial.println(mesafe);
  delay(250);
  
  if(mesafe <= 20){
    digitalWrite(in3,HIGH);
    digitalWrite(in4,HIGH);
    Serial.println("if iç");
  }else{
    delay(1500);
    digitalWrite(in3,HIGH);
    digitalWrite(in4,LOW);
  }
}
