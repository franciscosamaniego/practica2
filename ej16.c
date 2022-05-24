#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  int cont = 0;
  while(n > 0) {
    cont = n * n;
    printf("%d ", n);
    printf("%d\n", cont);
    n--;
  }
  printf("\n");
  return 0;
}
