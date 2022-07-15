#include "stdio.h"
#include "string.h"

/*
Leia o nome e a idade de 10 pessoas e exiba o nome da pessoa mais nova.
*/
int main(int argc, char const *argv[])
{
    char nome[100], nome_mais_nova[100];
    int idade, mais_nova;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o nome da pessoa %d: ", i + 1);
        scanf("%s", nome);

        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &idade);

        if (idade < mais_nova)
        {
            mais_nova = idade;
            strcpy(nome_mais_nova, nome);
        }
    }

    printf("Pessoa mais nova: %s\n", nome_mais_nova);

    return 0;
}
