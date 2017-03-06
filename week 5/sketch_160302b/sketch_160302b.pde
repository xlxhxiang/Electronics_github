int COLOR;
int xPos;
int yPos;
int recSize;
int add;

REC[] myRecArray= new REC[100];

void setup() {
  size(600, 600);
  background(0);
  smooth();

  COLOR=255;
  xPos=0;
  yPos=0;
  recSize=20;
  add=recSize;

  for (int i=0; i<myRecArray.length; i++) {
    myRecArray[i]=new REC(xPos, yPos, recSize);
  }
}

void draw() {

  for (int i=0; i<myRecArray.length; i++) {
    myRecArray[i].update();
    myRecArray[i].changeCol();
    myRecArray[i].drawRec();
  }
}