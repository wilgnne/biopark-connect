#include "stdio.h"

/*
Num determinado Estado, para transferências de veículos, o DETRAN cobra uma taxa de 1% para carros
fabricados antes de 1990 e uma taxa de 1.5% para os fabricados de 1990 em diante, a taxa incide sobre o
valor de tabela do carro. Elabore um algoritmo que leia o ano e o valor de tabela do carro, calcule e informe o
imposto a ser pago.
*/

int main(int argc, char const *argv[])
{

    int ano;
    float valor;

    printf("Insira o ano do veículo: ");
    scanf("%d", &ano);

    printf("Insira o valor de tabela do veículo: ");
    scanf("%f", &valor);

    if (ano < 1990)
        printf("O imposto a ser pago é de %.2f\n", valor * 0.01);
    else
        printf("O imposto a ser pago é de %.2f\n", valor * 0.015);

    return 0;
}
