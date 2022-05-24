#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  int funcion = 1;
  if(n > 0) {
    while(n > 0) {
      funcion = funcion * n;
      n--;
    }
    printf("%d\n", funcion);
  } else if (n == 0){
    printf("1\n");
  } else {
    printf("Error\n");
  }
  return 0;
}
