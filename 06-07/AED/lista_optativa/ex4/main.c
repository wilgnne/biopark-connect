#include "stdio.h"
#include "math.h"

/*
Faça um programa que leia dois valores inteiros nas variáveis x e y e troque o conteúdo
das variáveis. Refaça este problema sem o uso de outras variáveis que não x e y.
*/

int main(int argc, char const *argv[])
{
    int x, y, temp;

    printf("Digite x e y: ");
    scanf("%d%d", &x, &y);

    temp = x;
    x = y;
    y = temp;

    printf("x = %d\ny = %d\n", x, y);

    printf("Sem usar outras variáveis:\n");

    x = x + y;
    y = x - y;
    x = x - y;

    printf("x = %d\ny = %d\n", x, y);

    return 0;
}
