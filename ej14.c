#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  int cont = 1;
  while(n > 0) {
    cont = cont * n;
    n--;
  }
  printf("%d\n", cont);
  return 0;
}
