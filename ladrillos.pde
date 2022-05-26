size(400,400);
background(0);
int n = 20;
int division = width/n;
int x = division + 20;
int y = division;
for(int i = 0; i < n; i++) {
  stroke(255);
  strokeWeight(2);
  line(x,0,x,height);
  line(0,y,width,y);
  x += division + 20;
  y += division;
}
