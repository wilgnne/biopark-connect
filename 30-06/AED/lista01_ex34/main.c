#include "stdio.h"

/*
Faça um algoritmo que calcule e mostre a área de um quadrado. Sabe-se que: A = lado * lado; 
*/
int main(int argc, char const *argv[])
{
    float lado;

    printf("Insira a medida do lado: ");
    scanf("%f", &lado);

    printf("A area do quadrado e %.2f\n", lado * lado);

    return 0;
}
