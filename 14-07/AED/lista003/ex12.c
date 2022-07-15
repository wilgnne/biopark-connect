#include "stdio.h"

/*
Faça um algoritmo que leia 20 números e, ao final, escreva quantos estão entre 0 e
a. 100, quantos estão entre 101 e 200 e quantos são maiores de 200
*/
int main(int argc, char const *argv[])
{
    int n, intervalo_0_100, intervalo_101_200, intervalo_200 = 0;

    for (int i = 0; i < 20; i++)
    {
        printf("Informe um número: ");
        scanf("%d", &n);

        if (n >= 0 && n <= 100)
        {
            intervalo_0_100++;
        }
        else if (n >= 101 && n <= 200)
        {
            intervalo_101_200++;
        }
        else if (n > 200)
        {
            intervalo_200++;
        }
    }

    printf("Entre 0 e 100: %d\n", intervalo_0_100);
    printf("Entre 101 e 200: %d\n", intervalo_101_200);
    printf("Maiores de 200: %d\n", intervalo_200);

    return 0;
}
