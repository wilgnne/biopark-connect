#include "stdio.h"

/*
Uma empresa concederá um aumento de salário aos seus funcionários, variável de acordo com o cargo, con-
forme a tabela abaixo. Faça um algoritmo que leia o salário e o cargo de um funcionário e calcule o novo sa-
lário. Se o cargo do funcionário não estiver na tabela, ele deverá, então, receber 40% de aumento. Mostre o
salário antigo, o novo salário e a diferença.

Código Cargo Percentual
101 Gerente 10%
102 Engenheiro 20%
103 Técnico 30%
*/

int main(int argc, char const *argv[])
{

    int cargo;
    float salario;

    printf("Insira o cargo do funcionário: ");
    scanf("%d", &cargo);

    printf("Insira o salário do funcionário: ");
    scanf("%f", &salario);

    if (cargo == 101)
        printf("O antigado salário é R$%.2f; o novo salário é R$%.2f; o aumento é de R$%.2f\n", salario, salario * 1.10, salario * 1.10);
    else if (cargo == 102)
        printf("O antigado salário é R$%.2f; o novo salário é R$%.2f; o aumento é de R$%.2f\n", salario, salario * 1.20, salario * 1.20);
    else if (cargo == 103)
        printf("O antigado salário é R$%.2f; o novo salário é R$%.2f; o aumento é de R$%.2f\n", salario, salario * 1.30, salario * 1.30);
    else
        printf("O antigado salário é R$%.2f; o novo salário é R$%.2f; o aumento é de R$%.2f\n", salario, salario * 1.40, salario * 0.40);

    return 0;
}
