size(400,400);
int n = 10;
int division = width/n;
int x = division;
int y = division;
for(int i = 0; i < n; i++) {
  line(x,0,x,height);
  line(0,y,width,y);
  x += division;
  y += division;
}
