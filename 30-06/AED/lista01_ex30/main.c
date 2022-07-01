#include "stdio.h"

/*
Um funcionário recebe um salário fixo mais 4% de comissão sobre as vendas. Faça um algoritmo que receba
o salário fixo de um funcionário e o valor de suas vendas, calcule e mostre a comissão e o salário final do
funcionário.
*/
int main(int argc, char const *argv[])
{
    float salario, vendas, comissao;

    printf("Insira o salario fixo e o valor das vendas: ");
    scanf("%f%f", &salario, &vendas);

    comissao = vendas * 0.04;

    printf("O valor da comissao e %.2f\n", comissao);
    printf("O valor do salario final e %.2f\n", salario + comissao);

    return 0;
}
