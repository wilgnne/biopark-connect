#include "stdio.h"

void tabuada(int n);

int main (int argc, char *argv[])
{
  tabuada(10);
  return 0;
}

void tabuada(int n) {

  for (int i=1; i<=10; i++) {
    printf("%d * %d = %d\n", n, i, n*i);
  }
}
