#include "stdio.h"

/*
Escreva um algoritmo que leia uma sequência de números do usuário e realize a soma desses
números. Encerre a execução quando um número negativo for digitado
*/
int main(int argc, char const *argv[])
{
    int n, soma = 0;

    do
    {
        soma += n;
        printf("Informe um número: ");
        scanf("%d", &n);
    } while (n >= 0);

    printf("A soma dos números é: %d\n", soma);

    return 0;
}
