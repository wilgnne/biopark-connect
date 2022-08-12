#include "stdio.h"

#define N 5 

int main (int argc, char *argv[])
{
  int D[N], removeds=0;

  for (int i=0; i<N; i++) {
    scanf("%d", &D[i]);
  }

  for (int i=0; i<N; i++) {
    if(D[i] <= 0) {
      for(int j=i; j<N-removeds-1; j++)
      {
        D[j] = D[j+1];
      }
      removeds++;
      i--;
    }
  }

  printf("D[%d] = [", N - removeds);
  for (int i=0; i<N-removeds-1; i++) {
    printf("%d, ", D[i]);
  }
  printf("%d]\n", D[N-removeds]);

  return 0;
}
