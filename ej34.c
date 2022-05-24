
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  int m = 1;
  while(m <= n) {
    int i = 2;
    while (i < m-1) {
      if(m % i == 0) {
        printf("%d No es primo\n", m);
        break;
      }
      i++;
    }
    if(i == m - 1 || m == 2 || m == 1)
      printf("%d Es primo\n", m);
    m++;
  }
  return 0;
}
