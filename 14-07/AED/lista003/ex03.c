#include "stdio.h"

/*
Leia o nome do usuário e escreva o nome dele na tela 10 vezes
*/
int main(int argc, char const *argv[])
{
    char nome[100];

    printf("Informe o seu nome: ");
    scanf("%s", nome);

    for (int i = 0; i < 10; i++)
    {
        printf("%s\n", nome);
    }

    return 0;
}
