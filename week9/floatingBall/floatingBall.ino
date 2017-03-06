int rledPin = 5;
int gledPin = 7;
int bledPin = 8;
const int trigPin = 12;
const int echoPin = 13;
int touchSensor = 11;

long duration, last_distance;
int distance;

int current_r = 255;
int current_g = 255;
int current_b = 255;
int fade;

void setup() {

  Serial.begin(9600);

  //set ultrasonic distance measuring sensor pin
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  //set RGB Led pin
  pinMode(rledPin, OUTPUT);
  pinMode(gledPin, OUTPUT);
  pinMode(bledPin, OUTPUT);

  //set touch sensor pin
  pinMode(touchSensor, INPUT);
}

void loop() {

  //----------- Measure Distance -----------
  //get distance
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  //caculate
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;

  if (abs(distance - last_distance) < 10 && distance > 0 && distance < 1000) {

    //print out
    Serial.print("DURATION:  ");
    Serial.print(duration);
    Serial.print("\tDISTANCE:  ");
    Serial.println(distance);
    //-----------------------------------------

    //----------- According to distance fade -----------
    fade = distance;

    current_r = 255 - fade;

    current_g = 255 - fade;

    current_b = 255 - fade;

    setColor(current_r, 0 , 0);
    Serial.print("\tlightness:  ");
    Serial.println(current_r);

    //-----------------------------------------
  }
  last_distance = distance;

  //----------- If touch ----------
  if (digitalRead(touchSensor) == HIGH) {
    changeColor();
  }
  //-----------------------------------------
}

//----------- set RGB Led color -----------
void setColor(int red, int green, int blue)
{
  analogWrite(rledPin, constrain (red, 0, 255));
  analogWrite(gledPin, constrain(green, 0, 255));
  analogWrite(bledPin, constrain(blue, 0, 255));
}

//----------- set RGB Led color -----------
void changeColor() {
  digitalWrite(gledPin, LOW);
}
