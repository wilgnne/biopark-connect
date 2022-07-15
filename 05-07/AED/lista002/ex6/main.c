#include "stdio.h"

/*
Escreva um algoritmo que leia três valores inteiros e diferentes e mostre-os em ordem decrescente.
*/

int main(int argc, char const *argv[])
{
    int a, b, c;

    printf("Insira os valores A, B e C:");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
        if (b > c)
            printf("A ordem decrescente é: %d %d %d\n", c, b, a);
        else
            printf("A ordem decrescente é: %d %d %d\n", b, c, a);
    else if (b > a && b > c)
        if (a > c)
            printf("A ordem decrescente é: %d %d %d\n", c, a, b);
        else
            printf("A ordem decrescente é: %d %d %d\n", a, c, b);
    else if (a > b)
        printf("A ordem decrescente é: %d %d %d\n", b, a, c);
    else
        printf("A ordem decrescente é: %d %d %d\n", a, b, c);

    return 0;
}
