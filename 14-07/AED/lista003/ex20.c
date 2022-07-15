#include "stdio.h"
#include "string.h"

/*
Uma loja de animais vende gatos e cachorros. Escreva um algoritmo que leia a quantidade de
animais da loja e, para cada animal, leia a informação da espécie do animal (se é gato ou
cachorro). Ao final, exiba a quantidade de animais que são gatos e a quantidade de animais que
são cachorros existentes na loja
*/
int main(int argc, char const *argv[])
{
    int gatos, cachorros, total;
    char raca[20];

    printf("Informe a quantidade de animais: ");
    scanf("%d", &total);

    for (int i = 0; i < total; i++)
    {
        printf("Informe a raça do animal: ");
        scanf("%s", raca);
        if (strcmp(raca, "gato") == 0)
        {
            gatos++;
        }
        else
        {
            cachorros++;
        }
    }

    printf("A quantidade de gatos é: %d\n", gatos);
    printf("A quantidade de cachorros é: %d\n", cachorros);

    return 0;
}
