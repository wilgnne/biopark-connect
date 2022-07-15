#include "stdio.h"

/*
Faça um algoritmo que calcule e mostre a tabuada de um número digitado pelo usuário. 
*/
int main(int argc, char const *argv[])
{
    int x;

    printf("Qual sera a tabuada: ");
    scanf("%d", &x);

    for (int i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", x, i, x*i);
    }

    return 0;
}
