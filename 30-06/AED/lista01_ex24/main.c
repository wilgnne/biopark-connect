#include "stdio.h"

/*
Um tonel de refresco é feito com 8 partes de água mineral e 2 partes de suco de maracujá.
Faça um algoritmo para calcular quantos litros de água e de suco 
são necessários para se fazer X litros de refresco (informados pelo usuário). 
*/
int main(int argc, char const *argv[])
{
    float litros_de_suco;

    printf("Insira a quantidade de litros de suco: ");
    scanf("%f", &litros_de_suco);

    printf("%.2f litros de agua mineral e %.2f de suco\n", litros_de_suco * 0.8, litros_de_suco * 0.2);

    return 0;
}
