#include "stdio.h"
#include "string.h"

/*
Desenvolver um algoritmo que leia a altura de 15 pessoas. Este programa deverá calcular e mos-
trar :
a. A menor altura do grupo;
b. A maior altura do grupo;
*/
int main(int argc, char const *argv[])
{
    int altura, menor, maior;

    for (int i = 0; i < 15; i++)
    {
        printf("Informe a altura: ");
        scanf("%d", &altura);
        if (i == 0)
        {
            menor = altura;
            maior = altura;
        }
        if (altura < menor)
        {
            menor = altura;
        }
        if (altura > maior)
        {
            maior = altura;
        }
    }

    return 0;
}
