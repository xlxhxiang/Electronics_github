int s0 = 2;
int s1 = 4;

int Sensory0, Sensory1, Sensory2, Sensory3;

void setup() {
  pinMode(s0, OUTPUT);
  pinMode(s1, OUTPUT);
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop() {
  //Select input y0
  digitalWrite(s0, LOW);
  digitalWrite(s1, LOW);
  //Read input y0
  Sensory0 = analogRead(A0);

  //Select input y0
  digitalWrite(s0, LOW);
  digitalWrite(s1, HIGH);
  //Read input y0
  Sensory1 = analogRead(A0);

  //Select input y0
  digitalWrite(s0, HIGH);
  digitalWrite(s1, HIGH);
  //Read input y0
  Sensory2 = analogRead(A0);

  //Select input y0
  digitalWrite(s0, HIGH);
  digitalWrite(s1, LOW);
  //Read input y0
  Sensory3 = analogRead(A0);

  //print
  Serial.print(Sensory0);
  Serial.print('\t');
  Serial.print(Sensory1);
  Serial.print('\t');
  Serial.print(Sensory2);
  Serial.print('\t');
  Serial.print(Sensory3);
  Serial.print('\t');
  Serial.println();
}
