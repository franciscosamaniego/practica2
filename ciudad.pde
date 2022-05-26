size(600,200);
background(0);
int n = 40;
for(int i = 0; i < n; i++) {
  int x = (int) (Math.random() * 601);
  int y = (int) (Math.random() * 201);
  int r = (int) (Math.random() * 200);
  fill(255);
  rect(x,y,r,r);
}
