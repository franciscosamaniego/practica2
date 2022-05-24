#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  int naturales[n];
  for(int i = 0; i < n; i++) {
    naturales[i] = i;
    printf("%d ", naturales[i]);
  }
  printf("\n");
  return 0;
}
