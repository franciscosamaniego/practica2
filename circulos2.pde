size(400,400);
background(0);
ellipseMode(CORNER);
int n = 4;
int r = height/n;
if((n >= 4 && n <= 100) && 400 % n == 0) {
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      ellipse(i * r, j * r, r, r);
    }
  }
} else {
 print("Error");
 exit();
}
