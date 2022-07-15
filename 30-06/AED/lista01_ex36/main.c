#include "stdio.h"

/*
Faça um algoritmo que receba o valor do salário mínimo e o valor do salário de um funcionário, calcule e
mostre a quantidade de salários mínimos que ganha esse funcionário.
*/
int main(int argc, char const *argv[])
{
    float salario_minimo, salario_fun;

    printf("Insira o valor do salario minimo e do funcionario respectivamente: ");
    scanf("%f%f", &salario_minimo, &salario_fun);

    printf("O funcionario receve %.2f salario(s) minimo(s)\n", salario_fun / salario_minimo);

    return 0;
}
