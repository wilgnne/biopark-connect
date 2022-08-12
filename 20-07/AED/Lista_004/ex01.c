#include "stdio.h"

#define n 10

int main (int argc, char *argv[])
{
  int v1[n], v2[n], r[n];

  for (int i=0; i < n; i++) {
    scanf("%d%d", &v1[i], &v2[i]);

    r[i] = v1[i] + v2[i];
  }

  printf("[");
  for (int i = 0; i < n-1; i++) {
    printf("%d, ", r[i]);
  }
  printf("%d]\n", r[n-1]);

  return 0;
}
