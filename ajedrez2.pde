size(400,400);
int n = 40;
for(int i = 0; i < n; i++) {
for(int j = 0; j < n; j++) {
  int r = (int) (Math.random() * 256);
if((i + j) % 2 == 0) {
fill(r);
} else {
fill(r);
}
rect(i * 25, j * 25, 25, 25);
}
}
