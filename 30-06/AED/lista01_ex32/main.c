#include "stdio.h"

/*
Faça um algoritmo que receba o peso de uma pessoa em quilos, calcule e mostre esse peso em gramas
*/
int main(int argc, char const *argv[])
{
    float peso;

    printf("Insira o peso: ");
    scanf("%f", &peso);

    printf("O peso em gramas e %.2f\n", peso * 1000);

    return 0;
}