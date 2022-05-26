size(400,400);
int n = 50;
int x1 = 200;
int y1 = 200;
int x2 = 200;
int y2 = 200;
int cont = 1;
for(int i = 0; i < n; i++) {
  if(cont < 0) {
    cont -=4;
  } else {
    cont += 4;
  }
   x2 += cont;
 line(x1,y1,x2,y2);
 x1 = x2;
 y2 += cont;
 line(x1,y1,x2,y2);
 y1= y2;
 cont *= -1;
}
