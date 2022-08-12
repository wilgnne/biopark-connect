#include "stdio.h"

#define LENGTH 5

void printArray(int array[], int length) {
  printf("[");
  for (int i=0; i<length - 1; i++) {
    printf("%d, ", array[i]);
  }
  printf("%d]", array[length-1]);
}

int main (int argc, char *argv[])
{
  int array[LENGTH] = {1, 3, 2, 1, 0};
  int target, aux;

  for (int i=0; i<LENGTH; i++) {
    scanf("%d", &array[i]);
  }

  for (int i=0; i < LENGTH; i++) {
    for (int j = 0; j < LENGTH - i - 1; j++) {
      
      if (array[j] > array[j + 1]) {
        aux = array[j];
        array[j] = array[j + 1];
        array[j + 1] = aux;
      }

      printArray(array, LENGTH);
      printf(" i=%d   j=%d\n", i, j);
    }

  }


  return 0;
}
