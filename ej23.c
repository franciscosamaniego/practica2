#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  while (n >= 2) {
      if(n % 2 == 0) {
        printf("%d ", n);
      }
      n--;
  }
  printf("\n");
  return 0;
}
