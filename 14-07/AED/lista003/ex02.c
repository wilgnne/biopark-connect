#include "stdio.h"

/*
Escreva um algoritmo que calcule o somatório dos números de um intervalo informado pelo
usuário.
*/
int main(int argc, char const *argv[])
{
    int inicio, fim, soma = 0;

    printf("Informe o início do intervalo: ");
    scanf("%d", &inicio);
    printf("Informe o fim do intervalo: ");
    scanf("%d", &fim);

    for (int i = inicio; i <= fim; i++)
    {
        soma += i;
    }

    printf("Soma: %d\n", soma);

    return 0;
}
