#include "stdio.h"

/*
Leia o nome de um usuário e um número N e escreva o nome dele na tela N vezes.
*/
int main(int argc, char const *argv[])
{
    char nome[100];
    int n;

    printf("Informe o seu nome: ");
    scanf("%s", nome);

    printf("Informe o número de vezes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("%s\n", nome);
    }

    return 0;
}
