#include "stdio.h"
#include "string.h"

/*
Faça um algoritmo escreva a diversas vezes a pergunta “Olá tudo bem?” e leia a
a. resposta do usuário enquanto ele responde não. Só encerre a execução quando a resposta
for igual a “Sim”.
*/
int main(int argc, char const *argv[])
{
    char resposta[300];

    do
    {
        printf("Olá tudo bem? ");
        scanf("%s", resposta);
    } while (strcmp(resposta, "Sim") != 0);

    return 0;
}
