void setup() {
  Serial.begin(9600);
  pinMode(11, OUTPUT);
}

void loop() {
  int val = analogRead(A0);
  int pwm = map(val, 0, 1023, 0, 255);
  Serial.println(pwm);
  analogWrite(11, pwm);
  delay(50);
}
