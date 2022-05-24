#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <time.h>

int main(int argc, char *argv[]) {
  srand(time(NULL));
  int n[6];
  int m = atoi(argv[1]);
  int max = INT_MIN;
  int min = INT_MAX;
  int cont = 0;
  for(int i = 0; i < m; i++) {
    n[i] = rand() % 101;
    printf("%d ", n[i]);
    cont += n[i];
    if(n[i] > max) {
      max = n[i];
    }
    if(n[i] < min) {
      min = n[i];
    }
}
printf("\n");
printf("Prom: %d\n", (cont/m));
printf("Max: %d\n", max);
printf("Min: %d\n", min);
  return 0;
}
