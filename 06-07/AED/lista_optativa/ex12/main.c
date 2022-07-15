#include "stdio.h"
#include "math.h"

/*
Faça um programa que leia os três lados de um triângulo e informe se ele é isósceles,
escaleno ou equilátero. OBS: equilátero: possui os três lados iguais; isósceles: possui pelo
menos dois lados iguais; escaleno: três lados distintos.
*/

int main(int argc, char const *argv[])
{
    float a, b, c;

    printf("Digite os três lados de um triangulo: ");
    scanf("%f%f%f", &a, &b, &c);

    if (a == b && b == c)
    {
        printf("Triangulo equilatero\n");
    }
    else if (a == b || b == c || a == c)
    {
        printf("Triangulo isosceles\n");
    }
    else
    {
        printf("Triangulo escaleno\n");
    }

    return 0;
}
