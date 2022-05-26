#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  int x = 0;
  int y = 1;
  int z;
  int cont = 0;
  for (cont = 1; cont <= n; cont++)
   {
       z=x+y;
       printf("%d ",z);
       x=y;
       y=z;
  }
  printf("\n");
  return 0;
}
