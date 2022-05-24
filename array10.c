#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
  srand(time(NULL));
  char *palos[4] = {"Espada", "Basto", "Copa", "Oro"};
  char *number[10] = {"Uno", "Dos", "Tres","Cuatro", "Cinco", "Seis","Siete", "Diez", "Once", "Doce"};
  for(int i = 0; i < 3; i++) {
    int r = rand() % 10;
    int q = rand() % 4;
    printf("%s de", number[r]);
    printf(" %s ", palos[q]);
  }
  printf("\n");
  return 0;
}
