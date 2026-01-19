#include <Servo.h>

Servo ServoLeftRight ;
Servo ServoUpDown ;

int leftRight;

void setup() {
 ServoLeftRight.attach(10); // Sağ sol servosu 9.pin
 ServoUpDown.attach(9); // yukarı aşağı servosu 10.pin

}

void loop() {
  
  for(leftRight = 10; leftRight < 180; leftRight++){
    ServoLeftRight.write(leftRight);
    delay(25);

  }
  for(int i = 179; i> 10;i--){
    ServoLeftRight.write(i);
    delay(25);

  }

}
