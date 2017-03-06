int led = 3;
int touchSensor = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  pinMode(touchSensor, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(touchSensor) == LOW) {
    digitalWrite(led, LOW);
  } else {
    digitalWrite(led, HIGH);
  }
  delay(100);
}
