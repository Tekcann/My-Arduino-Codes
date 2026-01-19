#define trig 10
#define echo 9
#define in3 3
#define in4 1
#define en 2
#define s0 6
#define s1 5
#define s2 8
#define s3 7
#define out 4
#define mled 11
#define yled 12
#define kled 13
int k,y,m = 0;

void setup() {
   // seri haberleşmeyi başlattık
  Serial.begin(9600);
   // pinlerimi giriş veya çıkış olarak belirliyoruz
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(out,INPUT);

  pinMode(in3,OUTPUT);
  pinMode(in4,OUTPUT);
  pinMode(en,OUTPUT);
  pinMode(s0,OUTPUT);
  pinMode(s1,OUTPUT);
  pinMode(s2,OUTPUT);
  pinMode(s3,OUTPUT);
  pinMode(mled,OUTPUT);
  pinMode(yled,OUTPUT);
  pinMode(kled,OUTPUT);

  //Renk sensörünün frekans değerini ayarlıyoruz
  digitalWrite(s0,HIGH);
  digitalWrite(s1,LOW);

}

void loop() {
  
  //DC motorumuzun dönme hızını ayarladık 
  digitalWrite(en,HIGH);
  analogWrite(en,255);

  //Ultrasonik sensör ile mesafe ölçümünü kodladık
  digitalWrite(trig,LOW);
  delayMicroseconds(2);

  digitalWrite(trig,HIGH);
  delayMicroseconds(10);

  digitalWrite(trig,LOW);

  int sure = pulseIn(echo,HIGH);
  int mesafe = (sure/2)/29.1;

  Serial.println(mesafe);
  delay(250);
  
  //
  if(mesafe <= 20){
    digitalWrite(in3,HIGH);
    digitalWrite(in4,HIGH);
    Serial.println("if iç");
    renkler();
     renkbelirle();

  }else{
    delay(1500);
    digitalWrite(in3,HIGH);
    digitalWrite(in4,LOW);

    digitalWrite(kled, LOW);
    digitalWrite(yled, LOW);
    digitalWrite(mled, LOW);
  }
}
void renkler(){
  // kırmızı renkini belirleme
  digitalWrite(s2, LOW);
  digitalWrite(s3, LOW);
  k = pulseIn(out,LOW);
 
  Serial.print(k);
  Serial.print("  ");

  // Yeşil rengini belirleme 
  digitalWrite(s2, HIGH);
  digitalWrite(s3, HIGH);
  y = pulseIn(out,LOW);
  
  Serial.print(y);
  Serial.print("  ");

  // Mavi renk belirleme
  digitalWrite(s2, LOW);
  digitalWrite(s3, HIGH);
  m = pulseIn(out,LOW);
  
  Serial.print(m);
  Serial.print("  ");
  
  
}
void renkbelirle() {
  if (k <40 and k < m and k < y) {
    digitalWrite(kled, HIGH);
    digitalWrite(yled, LOW);
    digitalWrite(mled, LOW);
    Serial.print("kırmızı");
    digitalWrite(kled,HIGH);
  }
  else if (m < k and m < y) {
    digitalWrite(mled, HIGH);
    digitalWrite(kled, LOW);
    digitalWrite(yled, LOW);
    Serial.print("mavi");
    digitalWrite(mled,HIGH);
  }
  else if  (y < k and y < m) {
    digitalWrite(yled, HIGH);
    digitalWrite(kled, LOW);
    digitalWrite(mled, LOW);
    Serial.print("yeşil");
    digitalWrite(yled,HIGH);
  }
  else {
    digitalWrite(kled, LOW);
    digitalWrite(yled, LOW);
    digitalWrite(mled, LOW);
  }
}


