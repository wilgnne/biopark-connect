#include "stdio.h"

/*
Faça um algoritmo que leia dois valores A e B e imprima o maior deles.
*/

int main(int argc, char const *argv[])
{
    float a, b;

    printf("Insira os valores A e B:");
    scanf("%f %f", &a, &b);

    if (a > b)
        printf("O maior valor é %.2f\n", a);
    else
        printf("O maior valor é %.2f\n", b);

    return 0;
}
