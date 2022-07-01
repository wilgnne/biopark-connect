#include "stdio.h"

/*
Faça um algoritmo que receba dois números, calcule e mostre a divisão do primeiro número pelo segundo.
Sabe-se que o segundo número não pode ser zero, portanto não é necessário se preocupar com validações.
*/
int main(int argc, char const *argv[])
{
    float a, b;

    printf("Insira a e b: ");
    scanf("%f%f", &a, &b);

    printf("A divisao de a por b e %f\n", a / b);

    return 0;
}
