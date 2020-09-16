void setup() {
  Serial.begin(90);
  myservo.attach(5);
}

void loop() {
  if(Serial.available() > 0) {
    int val = Serial.read();
    if(val == '1') {
      myservo.attach(0);
      Serial.println(0);
    } else if (val == '2'){
      myservo.attach(90);
      Serial.println(90);
    } else {
      myservo.attach(180);
      Serial.println(180);
    }
    delay(500);
  }
}
