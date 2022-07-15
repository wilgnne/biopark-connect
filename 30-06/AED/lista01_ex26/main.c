#include "stdio.h"

/*
Faça um algoritmo que receba três números, calcule e mostre a multiplicação desses números
*/
int main(int argc, char const *argv[])
{
    int n1, n2, n3;

    printf("Insira 3 numeros: ");
    scanf("%d%d%d", &n1, &n2, &n3);

    printf("A multiplicacao dos 3 valores e %d\n", n1 * n2 * n3);

    return 0;
}
