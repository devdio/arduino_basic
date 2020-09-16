int count = 0;
void setup() {
  Serial.begin(9600);
  pinMode(7, INPUT_PULLUP);
  pinMode(12, OUTPUT);
}

void loop() {
  int val = digitalRead(7);
  if(val == 0) {
    digitalWrite(12, HIGH);
    delay(100);
    count = count + 1;
    Serial.println(count);
  } else {
    digitalWrite(12, LOW);
  }
}
