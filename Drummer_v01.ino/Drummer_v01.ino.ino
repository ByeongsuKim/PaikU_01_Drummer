#include <Servo.h>
Servo servo;
int degree = 0;
int gap = 300;

void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  servo.attach(9);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH);
  delay(gap);

  degree = 0;
  servo.write(degree);
  delay(gap);

  degree = 45;
  servo.write(degree);
  delay(gap);

  degree = 90;
  servo.write(degree);
  delay(gap);

  degree = 135;
  servo.write(degree);
  delay(gap);

  degree = 179;
  servo.write(degree);
  delay(gap);

  digitalWrite(13, LOW);
  delay(gap);
}

