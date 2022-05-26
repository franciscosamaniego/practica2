size(600,200);
background(0);
int n = 40;
int x = 10;
int y = 0;
for(int i = 0; i < n; i++) {
  noStroke();
  int t = (int) (Math.random() * 21);
  int r = (int) (Math.random() * 150);
  fill(255);
  rect(x,y,r,r);
  x += t;
}
