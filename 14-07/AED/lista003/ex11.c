#include "stdio.h"

/*
Faça um algoritmo que leia 20 números e, ao final, escreva quantos estão entre 0 e 100
*/
int main(int argc, char const *argv[])
{
    int n, intervalo = 0;

    for (int i = 0; i < 20; i++)
    {
        printf("Informe um número: ");
        scanf("%d", &n);

        if (n >= 0 && n <= 100)
        {
            intervalo++;
        }
    }

    printf("Entre 0 e 100: %d\n", intervalo);

    return 0;
}
