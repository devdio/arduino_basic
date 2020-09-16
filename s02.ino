void setup() {
  pinMode(2, OUTPUT); //G
  pinMode(7, OUTPUT); //Y
  pinMode(12, OUTPUT); //R
}

void loop() {
  digitalWrite(12, HIGH);
  delay(1000);
  digitalWrite(12, LOW);
  digitalWrite(7, HIGH);
  delay(1000);
  digitalWrite(7, LOW);
  digitalWrite(2, HIGH);
  delay(1000);
  digitalWrite(2, LOW);
}

