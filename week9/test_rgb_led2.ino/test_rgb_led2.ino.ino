int rledPin = 9;
int gledPin = 10;
int bledPin = 11;

void setup()
{
   pinMode(rledPin, OUTPUT);
   pinMode(gledPin, OUTPUT);
   pinMode(bledPin, OUTPUT);
}
void loop()
{
   setColor(255, 0, 0); 
   delay(2000);
   setColor(80, 0, 80); 
   delay(2000);
   setColor(0, 255, 0); 
   delay(2000);
   setColor(255, 255, 0); 
   delay(2000);
   setColor(0, 0, 255);
   delay(2000);
   setColor(0, 255, 255); 
   delay(2000);
}
void setColor(int red, int green, int blue)
{
   analogWrite(rledPin, red);
   analogWrite(gledPin, green);
   analogWrite(bledPin, blue);
}
