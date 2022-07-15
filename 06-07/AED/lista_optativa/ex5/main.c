#include "stdio.h"
#include "math.h"

/*
Faça um programa que leia o valor da base e altura de um triângulo e calcule o valor da
sua área.
*/

int main(int argc, char const *argv[])
{
    float base, altura, area;

    printf("Digite a base e a altura do triangulo: ");
    scanf("%f%f", &base, &altura);

    area = (base * altura) / 2;

    printf("A area do triangulo eh: %.2f\n", area);

    return 0;
}
