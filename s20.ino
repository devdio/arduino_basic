void setup() {
  Serial.begin(9600);
  pinMode(11, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop() {
  analogWrite(11, 255);
  analogWrite(6, 0);
  analogWrite(3, 0);
  delay(1000);
  analogWrite(11, 0);
  analogWrite(6, 255);
  analogWrite(3, 0);
  delay(1000);
  analogWrite(11, 0);
  analogWrite(6, 0);
  analogWrite(3, 255);
  delay(1000);
}
