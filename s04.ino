void setup() {
  Serial.begin(9600);
  pinMode(8, INPUT);
}

void loop() {
  int val = digitalRead(8);
  Serial.println(val);
}
