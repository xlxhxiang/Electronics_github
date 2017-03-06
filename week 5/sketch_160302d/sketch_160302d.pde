float XSPEED;
float YSPEED;
int recSize;
int COLOR;

MovingRec[] myRecArray= new MovingRec[10];

void setup() {
  size(600, 600);
  smooth();

  XSPEED=2;
  YSPEED=5;
  recSize=20;
  COLOR=0;

  for (int i=0; i<myRecArray.length; i++) {
    myRecArray[i]=new MovingRec(random(0, width), random(0, height));
  }
}

void draw() {
  background(0);

  for (int i=0; i<myRecArray.length; i++) {
    myRecArray[i].update();
    myRecArray[i].changeCol();
    myRecArray[i].checkCollisions();
    myRecArray[i].drawRec();
  }
}