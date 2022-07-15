#include "stdio.h"
#include "math.h"

/*
Faça um programa que leia um número real x e calcule o valor de f (x) = √x + (x/2) + xx.
(pesquise sobre as funções sqrt e pow ).
*/

int main(int argc, char const *argv[])
{
    float x;

    printf("Digite um numero real: ");
    scanf("%f", &x);

    printf("f(%.2f) = %.2f\n", x, sqrt(x) + x / 2 + pow(x, 2));

    return 0;
}
