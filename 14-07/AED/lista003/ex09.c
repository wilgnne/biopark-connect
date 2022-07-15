#include "stdio.h"

/*
Escreva um algoritmo que leia 20 números informados pelo usuário e exiba quantos números são
maiores do que 8
*/
int main(int argc, char const *argv[])
{
    int n, maiores = 0;

    for (int i = 0; i < 20; i++)
    {
        printf("Informe um número: ");
        scanf("%d", &n);

        if (n > 8)
        {
            maiores++;
        }
    }

    printf("Maiores do que 8: %d\n", maiores);

    return 0;
}
