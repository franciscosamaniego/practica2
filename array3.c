#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
  srand(time(NULL));
  int n = atoi(argv[1]);
  int m = atoi(argv[2]);
  int numbers[n];
  for(int i = 0; i < n; i++) {
    numbers[i] = rand() % m;
    printf("%d ", numbers[i]);
  }
  printf("\n");
  return 0;
}
