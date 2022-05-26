float x = 0;
float y = 0;
void setup () {
  size(200,200);
  background(0);
}
void draw () {
strokeWeight(2);
stroke(255);
line(100,0,100,200);
line(0,100,200,100);
for(x = 0; x < 100; x++) {
point (x, 40 + sin(1/8 * x));
}
}
