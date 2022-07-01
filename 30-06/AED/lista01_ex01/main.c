#include "stdio.h"

/*
A imobiliária Imóbilis vende apenas terrenos retangulares.
Faça um algoritmo para ler as dimensões de um terreno e depois exibir a área do terreno.
*/
int main(int argc, char const *argv[])
{
    float x, y;

    printf("Insira as dimencoes do terreno: ");
    scanf("%f %f", &x, &y);

    printf("A area do terreno e de %.2f\n", x * y);

    return 0;
}
