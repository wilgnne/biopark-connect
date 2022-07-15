#include "stdio.h"
#include "string.h"

/*
Foi feita uma pesquisa de canal de TV em várias casas da cidade de João Câmara. Para cada
casa visitada, foi preenchida uma ficha contendo o número do canal (3, 5, 8, 11 ou 13) e o número
de pessoas que estavam assistindo o canal naquela casa. Faça um algoritmo que:

a. Leia a informação da quantidade de casas participantes da pesquisa.
b. Receba as informações coletadas em cada uma das casas participantes da
c. pesquisa: a informação do canal que estava sendo assistido e a quantidade de
d. pessoas que estava assistindo aquele canal na casa.
e. Contabilize quantas pessoas estava assistindo cada canal (leve em conta a
f. quantidade de pessoas que assistia cada canal em cada casa)
g. Ao finalizar a leitura de todas as fichas, escreva o número do canal e sua
h. respectiva porcentagem de audiência.
*/
int main(int argc, char const *argv[])
{
    int casas, canal, pessoas, total_espectadores;
    int canal_3 = 0, canal_5 = 0, canal_8 = 0, canal_11 = 0, canal_13 = 0;

    printf("Informe a quantidade de casas participantes da pesquisa: ");
    scanf("%d", &casas);

    for (int i = 0; i < casas; i++)
    {
        printf("Informe o canal que estava sendo assistido: ");
        scanf("%d", &canal);
        printf("Informe a quantidade de pessoas que estava assistindo: ");
        scanf("%d", &pessoas);
        printf("\n");

        switch (canal)
        {
        case 3:
            canal_3 += pessoas;
            break;
        case 5:
            canal_5 += pessoas;
            break;
        case 8:
            canal_8 += pessoas;
            break;
        case 11:
            canal_11 += pessoas;
            break;
        case 13:
            canal_13 += pessoas;
            break;
        }
    }

    total_espectadores = canal_3 + canal_5 + canal_8 + canal_11 + canal_13;

    printf("\nCanal 3: %.2f%%\n", (float)canal_3 / total_espectadores * 100);
    printf("Canal 5: %.2f%%\n", (float)canal_5 / total_espectadores * 100);
    printf("Canal 8: %.2f%%\n", (float)canal_8 / total_espectadores * 100);
    printf("Canal 11: %.2f%%\n", (float)canal_11 / total_espectadores * 100);
    printf("Canal 13: %.2f%%\n", (float)canal_13 / total_espectadores * 100);

    return 0;
}
