#include "stdio.h"

/*
Faça um algoritmo que receba duas notas, calcule e mostre a média ponderada dessas notas, considerando
peso 2 para a primeira nota e peso 3 para a segunda nota.
*/
int main(int argc, char const *argv[])
{
    float a, b, media;

    printf("Insira as duas notas: ");
    scanf("%f%f", &a, &b);

    printf("A media e %f\n", (a * 2 + b * 3) / 5);

    return 0;
}
