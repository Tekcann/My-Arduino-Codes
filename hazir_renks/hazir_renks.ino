#define s0 5
#define s1 4
#define s2 6
#define s3 7
#define cikis 4
#define kled 13
#define yled 12
#define mled 11
int kirmizi, yesil, mavi = 0;
void setup() {
  pinMode(s0, OUTPUT);
  pinMode(s1, OUTPUT);
  pinMode(s2, OUTPUT);
  pinMode(s3, OUTPUT);
  pinMode(cikis, INPUT);
  pinMode(kled, OUTPUT);
  pinMode(yled, OUTPUT);
  pinMode(mled, OUTPUT);
  // Arduino için Frekans değerini ayarladık
  digitalWrite(s0, HIGH);
  digitalWrite(s1, LOW);
  Serial.begin(9600);
}

void loop() {
  // kalibreet();
  kalibreedilmis();
  renkbelirle();
}


void kalibreedilmis() {
  // Kırmızı rengi belirleme
  digitalWrite(s2, LOW);
  digitalWrite(s3, LOW);
  kirmizi = pulseIn(cikis, LOW);
 
  Serial.print("Kırmızı renk: ");
  Serial.print(kirmizi);
  Serial.print("\t");
  delay(50);
  // Yesil rengi belirleme
  digitalWrite(s2, HIGH);
  digitalWrite(s3, HIGH);
  yesil = pulseIn(cikis, LOW);

  Serial.print("Yeşil renk: ");
  Serial.print(yesil);
  Serial.print("\t");
  delay(50);
  // Mavi rengi belirleme
  digitalWrite(s2, LOW);
  digitalWrite(s3, HIGH);
  mavi = pulseIn(cikis, LOW);
 
  Serial.print("Mavi renk: ");
  Serial.print(mavi);
  Serial.println("\t");
  delay(50);
}
void renkbelirle() {
  if (kirmizi<90 and kirmizi < mavi and kirmizi < yesil) {
    digitalWrite(kled, HIGH);
    digitalWrite(yled, LOW);
    digitalWrite(mled, LOW);
  }
  else if (mavi < kirmizi and mavi < yesil ) {
    digitalWrite(mled, HIGH);
    digitalWrite(kled, LOW);
    digitalWrite(yled, LOW);
  }
  else if  (yesil < kirmizi and yesil < mavi) {
    digitalWrite(yled, HIGH);
    digitalWrite(kled, LOW);
    digitalWrite(mled, LOW);
  }
  else {
    digitalWrite(kled, LOW);
    digitalWrite(yled, LOW);
    digitalWrite(mled, LOW);
  }
}