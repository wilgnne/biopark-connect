#include "stdio.h"
#define N 5 

int main (int argc, char *argv[])
{
  int array[N], indexMenor=0, indexMaior=0;
  
  for (int i=0; i<N; i++) {
    scanf("%d", &array[i]);

    if (array[i] < array[indexMenor])
     indexMenor = i;
    else if (array[i] > array[indexMaior])
      indexMaior = i;
  }

  printf("A maior idade array[%d] = %d\n", indexMenor, array[indexMenor]);
  printf("A maior idade array[%d] = %d\n", indexMaior, array[indexMaior]);


  return 0;
}
