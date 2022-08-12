#include "stdio.h"

#define RLENGTH 5
#define SLENGTH 10

int main (int argc, char *argv[])
{
  int R[RLENGTH], S[SLENGTH], C[RLENGTH], Cindex = 0;

  printf("Entre com os %d valores de R\n", RLENGTH);
  for (int i=0; i<RLENGTH; i++) {
    scanf("%d", &R[i]);
  }

  printf("Entre com os %d valores de S\n", SLENGTH);
  for (int i=0; i<SLENGTH; i++) {
    scanf("%d", &S[i]);
  }

  for(int i=0; i<RLENGTH; i++){
    for(int j=0; j<SLENGTH; j++) {
      if (R[i] == S[j]) {
        C[Cindex] = R[i];
        Cindex++;
      }
    }
  }

  printf("C[%d] = [", Cindex);
  for(int i=0; i<Cindex-1; i++) {
    printf("%d, ", C[i]);
  }
  printf("%d]\n", C[Cindex-1]);

  return 0;
}
