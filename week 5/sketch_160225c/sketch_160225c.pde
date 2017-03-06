int COLOR=255;

REC rec1;
REC rec2;

void setup() {
  size(800, 800);
  smooth();

  rec1=new REC(20, 20, 15);
  delay(100);
  rec2=new REC(50, 50, 20);
  delay(100);
}

void draw() {
  background(0);

  rec1.update();
  rec2.update();

  rec1.changeCol();
  rec2.changeCol();


  rec1.drawRec();
  rec2.drawRec();
}