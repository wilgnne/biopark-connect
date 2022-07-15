#include "stdio.h"

/*
Ler um número inteiro (assuma até três dígitos) e imprimir a saída da seguinte forma: CENTENA = x
DEZENA = x
UNIDADE = x
*/
int main(int argc, char const *argv[])
{
    int x;

    printf("Insira um numero inteiro: ");

    scanf("%d", &x);

    printf("CENTENA = %d\n", x / 100);
    printf("DEZENA = %d\n", (x % 100) / 10);
    printf("UNIDADE = %d\n", x % 10);

    return 0;
}
