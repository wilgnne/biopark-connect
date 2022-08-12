#include "stdio.h"

int main (int argc, char *argv[])
{
  int G[5], A[10], acertos=0;
  
  printf("Insira os 5 numeros do gabarito da LOTO\n");
  for (int i=0; i<5; i++) {
    scanf("%d", &G[i]);
  }

  printf("Insira os 10 numeros do jogo\n");
  for (int i=0; i<10; i++) {
    scanf("%d", &A[i]);

    for (int j=0; j<5; j++) {
      if(G[j] == A[i])
        acertos++;
    }
  }

  printf("O total de acertos foi de %d\n", acertos);

  
  return 0;
}
