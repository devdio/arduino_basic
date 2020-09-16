void setup() {
  Serial.begin(9600);
  pinMode(11, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(3, OUTPUT);
}
// 함수 사용
void rgb(int r, int g, int b) {
  analogWrite(11, r);
  analogWrite(6, g);
  analogWrite(3, b);
}

void loop() {
  rgb(255, 0, 0);
  delay(1000);
  rgb(0, 255, 0);
  delay(1000);
  rgb(0, 0, 255);
  delay(1000);
}
