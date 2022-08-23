#include <Servo.h>

Servo myservo;
void setup() {
  Serial.begin(90);
  myservo.attach(5);
}

void loop() {
  int val = analogRead(A0);
  val = map(val, 0, 1025, 0, 180);
  myservo.write(val);
  delay(500);
}

