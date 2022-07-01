#include "stdio.h"

/*
Faça um algoritmo que calcule e mostre a área de um trapézio.
Sabe-se que: A = (base maior + base menor)* altura)/2 ;*/
int main(int argc, char const *argv[])
{
    float base_menor, base_maior, altura;

    printf("Insira a base menor, base maior e altura respectivamente: ");
    scanf("%f%f%f", &base_menor, &base_maior, &altura);

    printf("A area do trapezio e %.2f\n", (base_maior + base_menor) * altura / 2.0);

    return 0;
}
