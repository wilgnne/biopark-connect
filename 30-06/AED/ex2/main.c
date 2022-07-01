#include "stdio.h"

/*
Faça um algoritmo para calcular quantas ferraduras são necessárias para equipar todos os cavalos compra-
dos para um haras.
*/
int main(int argc, char const *argv[])
{
    int x;

    printf("Insira a quantidade de cavalos: ");
    scanf("%d", &x);

    printf("A quantidade de ferraduras necessarias e de %d\n", x * 4);

    return 0;
}
