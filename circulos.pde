size(400,400);
int n = 50;
noStroke();
for(int i = 0; i < n; i++) {
  int r = (int) ((Math.random() * 50)) + 10;
  int x = (int) (Math.random() * 401);
  int y = (int) (Math.random() * 401);
  int red = (int) (Math.random() * 256);
  int blue = (int) (Math.random() * 256);
  int green = (int) (Math.random() * 256);
  fill(red,green,blue);
  ellipse(x,y,r,r);
}

size(600,200);
background(0);
int n = 40;
int x = 0;
int y = 0;
int r = 10;
int s = 20;
for(int i = 0; i < n; i++) {
  int t = (int) (Math.random() * 21);
  fill(255);
  rect(x,y,r,s);
  x += 20;
  r += t;
  s += t;
}
