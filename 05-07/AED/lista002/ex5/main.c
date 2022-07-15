#include "stdio.h"

/*
Faça um algoritmo que leia uma variável e some 5 caso seja par ou some 8 caso seja ímpar, imprimir o resul-
tado desta operação.
*/

int main(int argc, char const *argv[])
{
    int a;

    printf("Insira um número: ");
    scanf("%d", &a);

    if (a % 2 == 0)
        printf("O resultado da soma é %d\n", a + 5);
    else
        printf("O resultado da soma é %d\n", a + 8);

    return 0;
}
