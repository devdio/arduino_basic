void setup() {
  Serial.begin(9600);
  pinMode(7, INPUT_PULLUP);
  pinMode(12, OUTPUT);
}

void loop() {
  int val = digitalRead(7);
  Serial.println(val);
  if(val == 0) {
    digitalWrite(12, HIGH);
  } else {
    digitalWrite(12, LOW);
  }
}
