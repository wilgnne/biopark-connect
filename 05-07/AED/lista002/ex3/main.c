#include "stdio.h"

/*
Faça um algoritmo que leia dois valores inteiros A e B se os valores forem iguais deverá se somar os dois,
caso contrário multiplique A por B. Ao final, apresente o resultado.
*/

int main(int argc, char const *argv[])
{
    float a, b;

    printf("Insira os valores A e B:");
    scanf("%f %f", &a, &b);

    if (a == b)
        printf("O resultado é %.2f\n", a + b);
    else
        printf("O resultado é %.2f\n", a * b);

    return 0;
}
