#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  if(n < 0) {
    printf("%d\n", -(n));
  } else {
    printf("%d\n", n);
  }
  return 0;
}
