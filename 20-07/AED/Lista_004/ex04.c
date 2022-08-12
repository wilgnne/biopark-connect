#include "stdio.h"

#define n 10

int main (int argc, char *argv[])
{
  int A[n], B[n], C[n];

  for (int i=0; i < n; i++) {
    scanf("%d%d", &A[i], &B[i]);

    C[i] = A[i] + B[i];
  }

  printf("[");
  for (int i = 0; i < n-1; i++) {
    printf("%d, ", C[i]);
  }
  printf("%d]\n", C[n-1]);

  return 0;
}
