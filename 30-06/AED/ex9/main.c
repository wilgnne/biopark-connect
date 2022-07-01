#include "stdio.h"

/*
Uma fábrica de camisetas produz os tamanhos pequeno, médio e grande, cada uma sendo vendida respecti-
vamente por 10, 12 e 15 reais. Construa um algoritmo em que o usuário forneça a quantidade de camisetas
pequenas, médias e grandes referentes a uma venda, e a máquina informe quanto será o valor arrecadado.
*/
int main(int argc, char const *argv[])
{
    int pequena, media, grande;

    printf("Insira a quantidade de camisa pequenas, medias e grandes respectivamente: ");
    scanf("%d %d %d", &pequena, &media, &grande);

    printf("O valor total e de %d\n", pequena * 10 + media * 12 + grande * 15);

    return 0;
}
