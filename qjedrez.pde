size(400,400);
int n = 40;
for(int i = 0; i < n; i++) {
for(int j = 0; j < n; j++) {
if((i + j) % 2 == 0) {
fill(0);
} else {
fill(255);
}
rect(i * 25, j * 25, 25, 25);
}
}
