#include "stdio.h"

/*
Elabore um algoritmo que leia dois números inteiros e mostre o resultado da diferença do maior valor pelo
menor;
*/

int main(int argc, char const *argv[])
{

    int n1, n2;

    printf("Insira os valores A e B:");
    scanf("%d %d", &n1, &n2);

    if (n1 > n2)
        printf("A diferença entre os dois valores é: %d\n", n1 - n2);
    else
        printf("A diferença entre os dois valores é: %d\n", n2 - n1);

    return 0;
}
