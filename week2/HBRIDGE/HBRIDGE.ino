void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(6, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(6, 120);//TURN ON
  digitalWrite(4, HIGH);
  digitalWrite(2, LOW);
  delay(500);
  digitalWrite(6, LOW);
  delay(500);
  analogWrite(6,253);
  digitalWrite(6, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(4, LOW);
  delay(500);
}
