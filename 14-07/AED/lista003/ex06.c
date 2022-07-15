#include "stdio.h"

/*
Leia a idade de 20 pessoas e exiba a média das idades
*/
int main(int argc, char const *argv[])
{
    int idade;
    float media = 0;

    for (int i = 0; i < 20; i++)
    {
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &idade);
        media += idade / 20.0;
    }

    printf("Média de idade: %.2f\n", media);

    return 0;
}
