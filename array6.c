#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
  srand(time(NULL));
  int n = 3;
  int a[3] = {2,4,5};
  int b[3] = {1,7,9};
  int c[3] = {a[0] * b[0], a[1] * b[1], a[2] * b[2]};
  for(int i = 0; i < 3; ++i) {
    printf("A: %d\n ", a[i]);
    printf("B: %d\n ", b[i]);
    printf("C: %d\n ", c[i]);
  }
  return 0;
}
