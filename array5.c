#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

int main(int argc, char *argv[]) {
  srand(time(NULL));
  int n = 100;
  int cont = 0;
  int max = INT_MIN;
  int min = INT_MAX;
  int numbers[100];
  for(int i = 0; i < n; i++) {
    numbers[i] = rand() % 100;
    printf("%d ", numbers[i]);
    cont = cont + numbers[i];
    if(numbers[i] > max) {
      max = numbers[i];
    }
    if(numbers[i] < min) {
      min = numbers[i];
    }
  }
  printf("\n");
  printf("Max: %d\n", max);
  printf("Min: %d\n", min);
  printf("Prom: %d\n", cont / 100);
  return 0;
}
