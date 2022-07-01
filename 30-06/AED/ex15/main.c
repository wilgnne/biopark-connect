#include "stdio.h"

/*
Três amigos, Carlos, André e Felipe. decidiram rachar igualmente a conta de um bar. Faça um algoritmo para
ler o valor total da conta e imprimir quanto cada um deve pagar, mas faça com que Carlos e André não pa-
guem centavos. Ex: uma conta de R$101,53 resulta em R$33,00 para Carlos, R$33,00 para André e R$35,53
para Felipe.
*/
int main(int argc, char const *argv[])
{
    float total;

    printf("Insira o valor total da conta: ");

    scanf("%f", &total);

    printf("O valor a pagar para Carlos e André e de %d\n", (int)total / 3);

    printf("O valor a pagar para Felipe e de %f\n", total - (int)(total / 3) * 2);

    return 0;
}
