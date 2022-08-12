#include "stdio.h"

#define N 5

int main (int argc, char *argv[])
{
  int A[N], accMenor15=0, cont15=0, accMaior15=0, contMaior15=0;
  
  for (int i=0; i<N; i++) {
    scanf("%d", &A[i]);

    if(A[i] < 15)
      accMenor15 += A[i];
    else if (A[i] == 15)
      cont15++;
    else if(A[i] > 15) {
      accMaior15 += A[i];
      contMaior15++;
    }
  }

  printf("A soma dos elementos armazenados neste vetor que sao inferiores a 15 e %d\n", accMaior15);
  printf("A quantidade de elementos armazenados no vetor que sao iguais a 15 e %d\n", cont15);
  printf("A media dos elementos armazenados no vetor que sao superiores a 15 e %.2f\n", accMaior15/(float)contMaior15);

  return 0;
}
