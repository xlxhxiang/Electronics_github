int S0=2;
int S1=4;

//Select input y0
digitalWrite(S0,LOW);
digitalWrite(S1,LOW);
//Read input y0
int Sensory0=analogRead(A0);

//Select input y0
digitalWrite(S0,LOW);
digitalWrite(S1,HIGH);
//Read input y0
int Sensory1=analogRead(A0);

//Select input y0
digitalWrite(S0,HIGH);
digitalWrite(S1,HIGH);
//Read input y0
int Sensory2=analogRead(A0);

//Select input y0
digitalWrite(S0,HIGH);
digitalWrite(S1,LOW);
//Read input y0
int Sensory3=analogRead(A0);


//Print
Serial.print(Sensory0);
Serial.print('\t');
Serial.print(Sensory1);
Serial.print('\t');
Serial.print(Sensory2);
Serial.print('\t');
Serial.print(Sensory3);
Serial.print('\t');
Serial.print();



