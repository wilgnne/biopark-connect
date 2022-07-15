#include "stdio.h"
#include "math.h"

/*
Faça um programa que lê o raio de um disco e imprime sua área e seu perímetro
*/

int main(int argc, char const *argv[])
{
    float raio;

    printf("Digite o raio do disco: ");
    scanf("%f", &raio);

    printf("A area do disco eh: %.2f\n", M_PI * pow(raio, 2));
    printf("O perimetro do disco eh: %.2f\n", 2 * M_PI * raio);

    return 0;
}
