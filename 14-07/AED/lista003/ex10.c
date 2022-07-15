#include "stdio.h"

/*
Escreva um algoritmo que leia 20 números informados pelo usuário e exiba quantos números são
pares
*/
int main(int argc, char const *argv[])
{
    int n, pares = 0;

    for (int i = 0; i < 20; i++)
    {
        printf("Informe um número: ");
        scanf("%d", &n);

        if (n % 2 == 0)
        {
            pares++;
        }
    }

    printf("Pares: %d\n", pares);

    return 0;
}
