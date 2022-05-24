#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
  srand(time(NULL));
  int n = 100;
  int cont = 0;
  int numbers[100];
  for(int i = 0; i < n; i++) {
    numbers[i] = rand() % 100;
    printf("%d ", numbers[i]);
    cont = cont + numbers[i];
  }
  printf("\n");
  printf("Prom: %d\n", cont / 100);
  return 0;
}
