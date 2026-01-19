
 #include <Servo.h>

Servo myServo;

void setup() {
  myServo.attach(10);   // Servo sinyal pini
  myServo.write(90);   // Reset açısı (örnek: 90 derece)
  delay(500);          // Yerine oturması için kısa bekleme
}

void loop() {
  // İstersen burada servo hareketleri yap
}
