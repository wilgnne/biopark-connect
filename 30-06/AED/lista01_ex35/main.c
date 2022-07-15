#include "stdio.h"

/*
Faça um algoritmo que calcule e mostre a área de um losango.
Sabe-se que: A = (diagonal_maior * diagonal_menor)/2;
*/
int main(int argc, char const *argv[])
{
    float diagonal_maior, diagonal_menor;

    printf("Insira a diagonal maior e menor respectivamente: ");
    scanf("%f%f", &diagonal_maior, &diagonal_menor);

    printf("A area do losango e %.2f\n", diagonal_maior * diagonal_menor / 2);

    return 0;
}
