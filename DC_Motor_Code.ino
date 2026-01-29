#include <AFMotor.h>

AF_DCMotor motor(3);

AF_DCMotor motora(4);

AF_DCMotor motorb(2);
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  motor.setSpeed(1000);
  motora.setSpeed(1000);
  motorb.setSpeed(150);

  motor.run(BACKWARD);
  motora.run(FORWARD);
  motorb.run(BACKWARD);

  

}
