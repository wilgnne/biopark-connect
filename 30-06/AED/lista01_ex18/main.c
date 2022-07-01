#include "stdio.h"

/*
A empresa Hipotheticus paga R$10,00 por hora normal trabalhada,e R$15,00 por hora extra.
Faça um algoritmo para calcular e imprimir o salário bruto e o salário líquido de um determinado funcionário.
Considere que o salário líquido é igual ao salário bruto descontando-se 10% de impostos.  
*/
int main(int argc, char const *argv[])
{
    float hora_normal, hora_extra;
    float salario_total;

    printf("Insira as horas trabalhadas, normal seguida das extras: ");
    scanf("%f%f", &hora_normal, &hora_extra);

    salario_total = hora_normal * 10 + hora_extra * 15;

    printf("O salario bruto sera de %.2f\n", salario_total);
    printf("O salario liquido sera de %.2f\n", salario_total - (salario_total * 0.1));

    return 0;
}
