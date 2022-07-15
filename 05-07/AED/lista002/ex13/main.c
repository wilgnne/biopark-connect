#include "stdio.h"

/*
Escrever um algoritmo que leia um valor em reais e calcule qual o menor número possível de notas de 100,
50, 10, 5 e 1 em que o valor lido pode ser decomposto. Escrever o valor lido e a relação de notas necessá-
rias.
*/

int main(int argc, char const *argv[])
{

    int valor;

    printf("Insira o valor em reais: ");
    scanf("%d", &valor);

    if (valor >= 100)
    {
        printf("%d nota(s) de 100\n", valor / 100);
        valor = valor % 100;
    }
    if (valor >= 50)
    {
        printf("%d nota(s) de 50\n", valor / 50);
        valor = valor % 50;
    }
    if (valor >= 10)
    {
        printf("%d nota(s) de 10\n", valor / 10);
        valor = valor % 10;
    }
    if (valor >= 5)
    {
        printf("%d nota(s) de 5\n", valor / 5);
        valor = valor % 5;
    }
    if (valor >= 1)
    {
        printf("%d nota(s) de 1\n", valor);
    }

    return 0;
}
