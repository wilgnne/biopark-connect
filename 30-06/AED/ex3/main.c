#include "stdio.h"

/*
A padaria Hotpão vende uma certa quantidade de pães franceses e uma quantidade de broas a cada dia.
Cada pãozinho custa R$ 0,12 e a broa custa R$ 1,50. Ao final do dia, o dono quer saber quanto arrecadou
com a venda dos pães e broas (juntos), e quanto deve guardar numa conta de poupança (10% do total arre-
cadado). Você foi contratado para fazer os cálculos para o dono. Com base nestes fatos, faça um algoritmo
para ler as quantidades de pães e de broas, e depois calcular os dados solicitados.
*/
int main(int argc, char const *argv[])
{
    int paes, broas;
    float total, polpanca;

    printf("Insira a quantidade de paes e broas respectivamente: ");
    scanf("%d %d", &paes, &broas);

    total = paes * 0.12 + broas * 1.5;
    polpanca = total * 0.1;

    printf("O valor arrecadado foi de %.2f reais\n", total);
    printf("e deve ser guardano %.2f reais\n", polpanca);

    return 0;
}
