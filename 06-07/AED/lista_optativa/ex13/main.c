#include "stdio.h"
#include "math.h"

/*
Escreva um programa que determina a data cronologicamente maior de duas datas forne-
cidas pelo usuário. Cada data deve ser fornecida por três valores inteiros onde o primeiro
representa um dia, o segundo um mês e o terceiro um ano.
*/

int main(int argc, char const *argv[])
{
    int d1, m1, a1, d2, m2, a2;
    int dia1, dia2;

    printf("Digite a data 1: ");
    scanf("%d%d%d", &d1, &m1, &a1);

    printf("Digite a data 2: ");
    scanf("%d%d%d", &d2, &m2, &a2);

    dia1 = a1 * 365 + m1 * 30 + d1;
    dia2 = a2 * 365 + m2 * 30 + d2;

    if (dia1 > dia2)
    {
        printf("Data 1 eh maior\n");
    }
    else if (dia1 < dia2)
    {
        printf("Data 2 eh maior\n");
    }
    else
    {
        printf("Datas sao iguais\n");
    }

    return 0;
}
