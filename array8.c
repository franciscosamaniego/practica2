#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int n[6] = {1,2,3,4,5,6};
  for(int i = 6; i >= 0; i--) {
    printf("%d ", n[i]);
  }
  printf("\n");
  return 0;
}
