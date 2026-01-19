#include <Servo.h>

Servo motor;

void setup() {
  motor.attach(2);

}

void loop() {
  //motor.write(0);

  for(int i = 0;i < 180;i++){
    motor.write(i);
    delay(25);
  }
  for(int i = 180;i > 180;i--){
    motor.write(i);
    delay(25);
  }

}
