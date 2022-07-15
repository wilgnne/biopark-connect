#include "stdio.h"

/*
Calcule a área de uma pizza que possui um raio R (pi=3.14)
*/
int main(int argc, char const *argv[])
{
    float r;

    printf("Insira o raio da pizza: ");

    scanf("%f", &r);

    printf("A area da pizza e de %f\n", 3.14 * r * r);

    return 0;
}
