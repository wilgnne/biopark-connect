#include "stdio.h"

/*
A lanchonete Gostosura vende apenas um tipo de sanduíche, cujo recheio inclui duas fatias de queijo, uma
fatia de presunto e uma rodela de hambúrguer.
Sabendo que cada fatia de queijo ou presunto pesa 50 gramas,
e que a rodela de hambúrguer pesa 100 gramas,
faça um algoritmo em que o dono forneça a quantidade de sanduíches a fazer,
e a máquina informe as quantidades (em quilos) de queijo, presunto e carne
necessários para compra. 
*/
int main(int argc, char const *argv[])
{
    int hamburguers;
    float queijo, presunto, carne;

    printf("Insira a quantidade de hamburguers a serem feitos: ");
    scanf("%d", &hamburguers);

    queijo = hamburguers * 2 * 0.05;
    presunto = hamburguers * 0.05;
    carne = hamburguers * 0.1;

    printf("Serao necessarias\n");
    printf("%.2f quilos de queijo\n", queijo);
    printf("%.2f quilos de presunto\n", presunto);
    printf("%.2f quilos de carne\n", carne);

    return 0;
}
