#include "stdio.h"

/*
Leia a idade de 20 pessoas e exiba quantas pessoas são maiores de idade.
*/
int main(int argc, char const *argv[])
{
    int idade, maiores;

    for (int i = 0; i < 20; i++)
    {
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &idade);

        if (idade >= 18)
        {
            maiores++;
        }
    }

    printf("Maiores de idade: %d\n", maiores);

    return 0;
}
