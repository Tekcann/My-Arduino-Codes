#include <Wire.h>
#include "Adafruit_GFX.h"
#include "Adafruit_LEDBackpack.h"

Adafruit_7segment display = Adafruit_7segment();

// LED ve Buton pinleri
const int ledPins[] = {2, 3, 4, 5, 6, 7};
const int buttonPins[] = {8, 9, 10, 11, 12, 13};
const int numLeds = 6;

int currentLed = -1;
unsigned long startTime = 0;
bool waitingForPress = false;

void setup() {
  Serial.begin(9600);
  display.begin(0x70); // 7-segment ekranın I2C adresi (genelde 0x70)

  // LED ve Buton pinlerini ayarla
  for (int i = 0; i < numLeds; i++) {
    pinMode(ledPins[i], OUTPUT);
    pinMode(buttonPins[i], INPUT_PULLUP); // Dahili pull-up direnci kullan
  }

  randomSeed(analogRead(0)); // Rasgelelik için başlangıç
}

void loop() {
  if (!waitingForPress) {
    currentLed = random(numLeds);
    digitalWrite(ledPins[currentLed], HIGH);
    startTime = millis();
    waitingForPress = true;
  }

  // Doğru butona basıldı mı kontrol et
  if (waitingForPress && digitalRead(buttonPins[currentLed]) == LOW) {
    unsigned long reactionTime = millis() - startTime;
    
    // Süreyi ekrana yaz
    display.print(reactionTime);
    display.writeDisplay();
    
    // Konsola da yaz
    Serial.print("Tepki süresi: ");
    Serial.println(reactionTime);

    // LED'i kapat ve tekrar başlamak için bekle
    digitalWrite(ledPins[currentLed], LOW);
    delay(1000); // Kısa bekleme
    waitingForPress = false;
    display.clear();
    display.writeDisplay();
    delay(500);
  }
}
