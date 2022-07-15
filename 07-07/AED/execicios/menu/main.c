#include "stdio.h"

int main(int argc, char const *argv[])
{
    int n;

    do
    {
        printf("---- Menu ----\n");
        printf("1- Pato no tucupi\n");
        printf("2- Mandioquinha\n");
        printf("3- Picanha\n");
        printf("4- Hamburguer\n");
        printf("5- Sair\n");
        printf("\n");

        printf("Digite a opcao desejada: ");
        scanf("%d", &n);

        switch (n)
        {
        case 1:
            printf("Pato no tucupi\n");
            break;
        case 2:
            printf("Mandioquinha\n");
            break;
        case 3:
            printf("Picanha\n");
            break;
        case 4:
            printf("Hamburguer\n");
            break;
        case 5:
            printf("Sair\n");
            break;
        default:
            printf("Opcao invalida\n");
            break;
        }
        printf("\n");

    } while (n != 5);

    return 0;
}
