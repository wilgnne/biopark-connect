#include "stdio.h"

/*
A fábrica de refrigerantes Meia-Cola vende seu produto em três formatos:
lata de 350 ml, garrafa de 600 ml e garrafa de 2 litros.
Se um comerciante compra uma determinada quantidade de cada formato,
faça um algoritmo para calcular quantos litros de refrigerante ele comprou. 
*/
int main(int argc, char const *argv[])
{
    int lata, garrafa600, garrafa2l;
    float total;

    printf("Insira a quantidade de latas, garrafas 600ml e garrafas 2l compradas\n");
    scanf("%d%d%d", &lata, &garrafa600, &garrafa2l);

    total = lata * 0.35 + garrafa600 * 0.6 + garrafa2l * 2;

    printf("A quantidade de litros comprados foi de %.2f litros\n", total);

    return 0;
}
