#include "stdio.h"
#include "math.h"

/*
Faça um algoritmo que receba o valor dos catetos de um triângulo, calcule e mostre o valor da hipotenusa.
*/
int main(int argc, char const *argv[])
{
    float cateto_oposto, cateto_adjacente, hipotenusa;

    printf("Insira o cateto oposto e adjacente: ");
    scanf("%f%f", &cateto_oposto, &cateto_adjacente);

    hipotenusa = pow(pow(cateto_adjacente, 2) + pow(cateto_oposto, 2) , 0.5);

    printf("A hipotenusa vale %f\n", hipotenusa);

    return 0;
}
