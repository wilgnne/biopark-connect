#include "stdio.h"

/*
João recebeu seu salário de R$ 1200,00 e precisa pagar duas contas (C1=R$ 200,00 e C2=R$120,00) que
estão atrasadas. Como as contas estão atrasadas, João terá de pagar multa de 2% sobre cada conta. Faça
um algoritmo que calcule e mostre quanto restará do salário do João
*/
int main(int argc, char const *argv[])
{
    float salario, conta1, conta2;

    printf("Insira o salario, e o valor das duas contas a pagar: ");
    scanf("%f%f%f", &salario, &conta1, &conta2);

    salario -= conta1 * 0.02;
    salario -= conta2 * 0.02;

    printf("Restara %.2f reais\n", salario);

    return 0;
}
