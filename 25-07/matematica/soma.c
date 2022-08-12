#include "stdio.h"

int main (int argc, char *argv[])
{
  float n = 0;
  long double x = 0;

  for (int i=0; i<=30000; i++) {
    printf("n=%f  x=%Lf  diff=%Lf\n", n, x, n-x);

    n += 0.11;
    x += 0.11;
  }

  return 0;
}
