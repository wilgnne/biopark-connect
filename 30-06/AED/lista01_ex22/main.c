#include "stdio.h"

/*
Pedrinho tem um cofrinho com muitas moedas, e deseja saber quantos reais conseguiu poupar.
Faça um algoritmo para ler a quantidade de cada tipo de moeda, e imprimir o valor total economizado, em reais.
Considere que existam moedas de 1, 5, 10, 25 e 50 centavos, e ainda moedas de 1 real.
Não havendo moeda de um tipo, a quantidade respectiva é zero. 
*/
int main(int argc, char const *argv[])
{
    int moedas1, moedas5, moedas10, moedas25, moedas50, moedas100;
    float total = 0;

    printf("Insira respectivamente a quantidade de moedas de 1, 5, 10, 25 e 50 centavos, e moedas de 1 real\n");

    scanf("%d%d%d%d%d%d", &moedas1, &moedas5, &moedas10, &moedas25, &moedas50, &moedas100);

    total += 0.01 * moedas1;
    total += 0.05 * moedas5;
    total += 0.10 * moedas10;
    total += 0.25 * moedas25;
    total += 0.50 * moedas50;
    total += moedas100;

    printf("O valor total polpado e de %.2f reais\n", total);

    return 0;
}
