#include "stdio.h"

/*
Desenvolva um algoritmo capaz de apresentar na tela o fatorial de um número inteiro informado
pelo usuário.
*/
int main(int argc, char const *argv[])
{
    int n, fatorial = 1;

    printf("Informe um número: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        fatorial *= i;
    }

    printf("Fatorial: %d\n", fatorial);

    return 0;
}
