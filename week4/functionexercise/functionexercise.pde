
void setup() {
  size(500, 500);
  background(255);
  smooth();
  frameRate(5);
}

void draw() {
  for (int i=0; i<=width; i+= width/5) {
    for (int j=0; j<height; j+=(height/3)) {
      drawshape(i, j);
    }
  }
}

void drawshape(float x, float y) {
  pushMatrix();
  translate(x, y);
  noStroke();
  fill(RGB, random(50, 200), mouseY);
  rect(-80, 0, 80, 3*(80));
  ellipse(-80, 80, 50, 50);
  fill(255);
  ellipse(-30, 80, 4*(50/5), 4*(50/5));
  popMatrix();
}