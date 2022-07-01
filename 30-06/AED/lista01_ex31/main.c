#include "stdio.h"

/*
1. Faça um algoritmo que receba o peso de uma pessoa, calcule e mostre:
a. o novo peso se a pessoa engordar 15% sobre o peso digitado;
b. o novo peso se a pessoa emagrecer 20% sobre o peso digitado. 
*/
int main(int argc, char const *argv[])
{
    float peso;

    printf("Insira o peso: ");
    scanf("%f", &peso);

    printf("O novo peso caso engorde 15%% e %.2f\n", peso + (peso * 0.15));
    printf("O novo peso caso emagreca 20%% e %.2f\n", peso - (peso * 0.20));

    return 0;
}
