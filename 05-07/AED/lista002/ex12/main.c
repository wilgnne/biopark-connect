#include "stdio.h"

/*
Dados três valores X, Y e Z, verificar se eles podem ser os comprimentos dos lados de um triângulo e, se
forem verificar se é um triângulo equilátero, isósceles ou escalenos. Se eles não formarem um triângulo, es-
crever a mensagem. Considere as seguintes propriedades:

a. O comprimento de cada lado em um triângulo é menor que a soma dos outros dois lados;
b. Equiláteros: tem os comprimentos dos três lados iguais;
c. Isósceles: tem os comprimentos de dois lados iguais;
d. Escaleno: tem os comprimentos dos três lados diferentes
*/

int main(int argc, char const *argv[])
{

    float x, y, z;

    printf("Insira os valores X, Y e Z:");
    scanf("%f %f %f", &x, &y, &z);

    if (x + y > z && x + z > y && y + z > x)
    {
        if (x == y && x == z)
            printf("É um triângulo equilátero\n");
        else if (x == y || x == z || y == z)
            printf("É um triângulo isósceles\n");
        else
            printf("É um triângulo escaleno\n");
    }
    else
        printf("Não é um triângulo\n");

    return 0;
}
