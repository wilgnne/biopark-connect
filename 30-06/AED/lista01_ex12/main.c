#include "stdio.h"

/*
Faça um algoritmo para ler o salário de um funcionário e aumentá-Io em 15%. Após o aumento, desconte 8%
de impostos. Imprima o salário inicial, o salário com o aumento e o salário final
*/
int main(int argc, char const *argv[])
{
    float salario, aumento, imposto;

    printf("Insira o salario do funcionario: ");

    scanf("%f", &salario);

    aumento = salario * 0.15;

    imposto = salario * 0.08;

    printf("O salario com o aumento e de %f\n", salario + aumento);

    printf("O salario com o imposto e de %f\n", salario - imposto);

    return 0;
}
