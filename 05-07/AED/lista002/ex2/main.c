#include "stdio.h"

/*
Faça um algoritmo para receber um número qualquer e informar na tela se é par ou ímpar.
*/

int main(int argc, char const *argv[])
{
    int numero;

    printf("Insira um número qualquer: ");
    scanf("%d", &numero);

    if (numero % 2 == 0)
        printf("O número %d é par\n", numero);
    else
        printf("O número %d é ímpar\n", numero);

    return 0;
}
