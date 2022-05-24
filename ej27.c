#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  int i = 8;
  int cont = 1;
  while(i >= 0){
  cont = pow(2,i);
    if((n - cont) >= 0) {
      printf("1 ");
    } else      printf("0 ");
    i--;
    if(n - cont >= 0) {
      n = n - cont;
    }
  }
  printf("\n");
  return 0;
}
