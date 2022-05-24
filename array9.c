#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int n[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
  for(int i = 20; i >= 0; i--) {
    if((n[i] % 2) == 0) {
    printf("%d ", n[i]);
    }
  }
  printf("\n");
  return 0;
}
