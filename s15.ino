void setup() {
  Serial.begin(9600);
  pinMode(12, OUTPUT)
}

void loop() {
  int val = analogRead(A0);
  Serial.println(val);
  if (val > 300) {
    digitalWrite(12, HIGH)
  } else {
    digitalWrite(12, LOW);
  }
  delay(500);
}

