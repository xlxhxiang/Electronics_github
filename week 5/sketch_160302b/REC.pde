class REC {
  int x;
  int y;
  int s;
  int col;
  int fade=-1;

  REC(int xpos, int ypos, int size) {
    x=xpos;
    y=ypos;
    s=size;
    col=COLOR;
  }

  void update() {
    col+=fade;
    x+=add;
    if (x>width) {
      x=0;
      y+=add;
    }
  }

  void changeCol() {
    if (col==0 || col==255) {
      fade=-fade;
    }
  }

  void drawRec() {
    noStroke();
    fill(col);
    rect(x, y, s, s);
  }
}