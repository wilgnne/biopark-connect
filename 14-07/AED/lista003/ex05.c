#include "stdio.h"

/*
Escreva um algoritmo que leia 10 números informados pelo usuário e calcule a soma desses
números
*/
int main(int argc, char const *argv[])
{
    int n, soma = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Informe um número: ");
        scanf("%d", &n);
        soma += n;
    }

    printf("A soma dos números é: %d\n", soma);

    return 0;
}
