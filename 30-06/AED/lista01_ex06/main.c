#include "stdio.h"

/*
O restaurante a quilo Bem-Bão cobra R$12,00 por cada quilo de refeição. Escreva um algoritmo que leia o
peso do prato montado pelo cliente (em quilos) e imprima o valor a pagar. Assuma que a balança já desconte
o peso do prato.
*/
int main(int argc, char const *argv[])
{
    float peso;

    printf("Insira peso do prato: ");
    scanf("%f", &peso);

    printf("O valor a pagar é %f\n", peso * 12.0);

    return 0;
}
