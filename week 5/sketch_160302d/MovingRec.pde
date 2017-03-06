class MovingRec {
  float x;
  float y;
  float xSpeed;
  float ySpeed;
  int fade;
  int col;

  MovingRec(float xpos, float ypos) {
    x=xpos;
    y=ypos;
    xSpeed=XSPEED;
    ySpeed=YSPEED;
    fade=1;
    col=COLOR;
  }

  void update() {
    x+=xSpeed;
    y+=ySpeed;
    col+=fade;
  }

  void changeCol() {
    if (col<=0 || col>=255) {
      fade=-fade;
    }
  }

  void checkCollisions() {
    if (x<=0 || x>= width-recSize) {
      xSpeed=-xSpeed;
      fade=-fade;
    }
    if (y<=0 || y>=height-recSize) {
      ySpeed=-ySpeed;
      fade=-fade;
    }
  }

  void drawRec() {
    fill(col);
    rect(x, y, recSize, recSize);
  }
}