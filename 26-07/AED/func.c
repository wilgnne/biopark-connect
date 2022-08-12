#include "stdio.h"

void printArray(int array[], int length) {
  printf("Array[%d] = [", length);

  for (int i = 0; i < length-1; i++) {
    printf("%d, ", array[i]);
  }

  printf("%d]\n", array[length-1]);
}

int TESTE = 1;

int* criaArray() {
  int novoArray[5] = {1, 2, 3, 4, 5};

  printf("O endereço do array criado é %p\n", novoArray);
  
  return novoArray;
}

long int forcaCriarArray() {
  int novoArray[5] = {1, 2, 3, 4, 5};

  long int v = (long int)novoArray;

  printf("O endereco do array criado é %p\n", novoArray);

  return v;
}

int main (int argc, char *argv[])
{
  int arr[5] = {1, 2, 3, 4, 5};
  printArray(arr, 5);

  int *arr1 = (int *)forcaCriarArray();

  printArray(arr, 5);

  printf("O endereco apontado por arr1 é %p\n", arr1);

  printArray(arr1, 5);

  return 0;
}
