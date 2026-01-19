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

int k,y,m;

void setup() {
   // seri haberleşmeyi başlattık
  Serial.begin(9600);
   // pinlerimi giriş veya çıkış olarak belirliyoruz
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(out,INPUT);

  for(int i = 2;i <= 8;i++){
    pinMode(i,OUTPUT);
  } 
  //Renk sensörünün frekans değerini ayarlıyoruz
  digitalWrite(s0,HIGH);
  digitalWrite(s1,LOW);

  
  
}

void loop() {
    duzenlenmis();//void komutu ile kod oluşturduk

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
  
  
  //
  if(mesafe <= 20){
    digitalWrite(in3,HIGH);
    digitalWrite(in4,HIGH);
    Serial.println("if iç");

    if(k < y and k < m and k < 40){
        
    }else if(y < k and y < m){

    }else if(m < y and m < k){


    }

  }else{

    delay(1500);
    digitalWrite(in3,HIGH);
    digitalWrite(in4,LOW);
  }
}
void duzenlenmis(){
  // kırmızı renkini belirleme
  digitalWrite(s2, LOW);
  digitalWrite(s3, LOW);
  k = pulseIn(out,LOW);
  k = map(k,3,51,0,100);
  Serial.print(k);
  Serial.print("  ");

  // Yeşil rengini belirleme 
  digitalWrite(s2, HIGH);
  digitalWrite(s3, HIGH);
  y = pulseIn(out,LOW);
  y = map(k,3,51,0,100);
  Serial.print(y);
  Serial.print("  ");

  // Mavi renk belirleme
  digitalWrite(s2, LOW);
  digitalWrite(s3, HIGH);
  m = pulseIn(out,LOW);
  m = map(k,3,51,0,100);
  Serial.print(k);
  Serial.print("  ");
  
  
}
