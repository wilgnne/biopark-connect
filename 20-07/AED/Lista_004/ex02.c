#include "stdio.h"

#define n 3

int main (int argc, char *argv[])
{
  int v[n];
  int pares = 0, impares = 0, maiores_50 = 0, menores_7 = 0;

  for (int i=0; i < n; i++) {
    scanf("%d", &v[i]);

    if ((v[i] % 2) == 0) pares += 1;
    else impares += 1;

    if (v[i] > 50) maiores_50 += 1;
    if (v[i] < 7) menores_7 += 1; 
  }

  printf("%d numeros pares\n", pares);
  printf("%d numeros impares\n", impares);
  printf("%d numeros maiores que 50\n", maiores_50);
  printf("%d numeros menores que 7\n", menores_7);

  return 0;
}
