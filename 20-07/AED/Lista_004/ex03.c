#include "stdio.h"

#define n 3

int main (int argc, char *argv[])
{
  int A[n], B[n];

  for (int i=0; i<n; i++)
  {
    scanf("%d", &A[i]);

    B[i] = A[i] * 2;
  }

  for (int i = 0; i < n; i++) {
    printf("%d ", B[i]);
  }

  return 0;
}
