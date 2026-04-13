void setup(){
  Serial.begin(9600);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  if (analogRead(32)*0.488 / 140 > 0 && analogRead(32)*0.488 / 140 < 7) {
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);
    Serial.print(String("V = ") + String((random(11.0, 13.5))));
    Serial.print(",");
    Serial.print(String("I = ") + String((analogRead(32)*0.488 / 140)));
    Serial.print(",");
    Serial.print("L1-L2-L3 ON,");
    Serial.println("");
    delay(1000);

  } else if (analogRead(32)*0.488 / 140 > 6 && analogRead(32)*0.488 / 140 < 8) {
    digitalWrite(12,HIGH);
    digitalWrite(13,LOW);
    Serial.print(String("V = ") + String((random(11.0, 13.5))));
    Serial.print(",");
    Serial.print(String("I = ") + String((analogRead(32)*0.488 / 140)));
    Serial.print(",");
    Serial.print("L1-L2-ON,");
    Serial.println("");
    delay(10000);
  } else if (analogRead(32)*0.488 / 140 > 7 && analogRead(32)*0.488 / 140 < 9) {
    digitalWrite(12,HIGH);
    digitalWrite(13,HIGH);
    Serial.print(String("V = ") + String((random(11.0, 13.5))));
    Serial.print(",");
    Serial.print(String("I = ") + String((analogRead(32)*0.488 / 140)));
    Serial.print(",");
    Serial.print("L1-ON,");
    Serial.println("");
    delay(10000);
  }

}
