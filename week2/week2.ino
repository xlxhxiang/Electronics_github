
int sensorPin_b = A0;  // select the input pin A0 for the switch button
int sensorPin_l = A1;  // select the input pin A1 for the potentiometer
int ledPin1 = 8;  // select the pin8 for the LED
int ledPin2 = 9;  // select the pin9 for the LED
int ledPin3 = 10;  // select the pin10 for the LED
int ledPin4 = 11;  // select the pin11 for the LED
int ledPin5 = 12;  // select the pin12 for the LED
int sensorValue_b = 0;  // variable to store the value coming from the switch button
int sensorValue_l = 0;  // variable to store the value coming from the potentionmeter

void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);

  // declare the ledPin as an OUTPUT:
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(ledPin5, OUTPUT);
}

void loop() {
  // read the value from the switch:
  sensorValue_b = analogRead(sensorPin_b);
  // read the value from the potentionmeter
  sensorValue_l = analogRead(sensorPin_l);
  // print out the value of button:
  Serial.print(sensorValue_b);
  delay(100);  // delay in between reads for stability
  Serial.print("\t");
  // print out the value of potentionmeter:
  Serial.println(sensorValue_l);
  delay(100);        // delay in between reads for stability

  // if release the button, the led turn on one by one and then repeat, and they turn off according to the value of potentionmeter
  if (sensorValue_b == 0) {
    digitalWrite(ledPin1, HIGH);
    delay(sensorValue_l);
    digitalWrite(ledPin1, LOW);
    delay(sensorValue_l);
    // turn the ledPin on
    digitalWrite(ledPin2, HIGH);
    delay(sensorValue_l);
    digitalWrite(ledPin2, LOW);
    delay(sensorValue_l);
    // turn the ledPin on
    digitalWrite(ledPin3, HIGH);
    delay(sensorValue_l);
    digitalWrite(ledPin3, LOW);
    delay(sensorValue_l);
    // turn the ledPin on
    digitalWrite(ledPin4, HIGH);
    delay(sensorValue_l);
    digitalWrite(ledPin4, LOW);
    delay(sensorValue_l);
    // turn the ledPin on
    digitalWrite(ledPin5, HIGH);
    delay(sensorValue_l);
    digitalWrite(ledPin5, LOW);
    delay(sensorValue_l);
  }
  // if press the button, two leds turn on at one time, and they turn off according to the value of potentionmeter
  if (sensorValue_b == 1023) {
    // turn the ledPin on:
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin5, HIGH);
    delay(sensorValue_l);
    // turn the ledPin off:
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin5, LOW);
    //delay(sensorValue_l);
    // turn the ledPin on:
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin4, HIGH);
    delay(sensorValue_l);
    // turn the ledPin off:
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin4, LOW);
    //delay(sensorValue_l);
    // turn the ledPin on:
    digitalWrite(ledPin3, HIGH);
    delay(sensorValue_l);
    // turn the ledPin off:
    digitalWrite(ledPin3, LOW);
    //delay(sensorValue_l);
    // turn the ledPin on:
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin4, HIGH);
    delay(sensorValue_l);
    // turn the ledPin off:
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin4, LOW);
    //delay(sensorValue_l);
  }
}
