#include "stdio.h"
#include "math.h"

/*
Escreva um programa que lê uma coordenada (x, y) do teclado e imprima como resposta
o quadrante em que a coordenada está.
*/

int main(int argc, char const *argv[])
{
    float x, y;

    printf("Digite a coordenada x: ");
    scanf("%f", &x);
    printf("Digite a coordenada y: ");
    scanf("%f", &y);

    if (x > 0 && y > 0)
    {
        printf("Quadrante 1\n");
    }
    else if (x < 0 && y > 0)
    {
        printf("Quadrante 2\n");
    }
    else if (x < 0 && y < 0)
    {
        printf("Quadrante 3\n");
    }
    else if (x > 0 && y < 0)
    {
        printf("Quadrante 4\n");
    }
    else
    {
        printf("Origem\n");
    }

    return 0;
}
