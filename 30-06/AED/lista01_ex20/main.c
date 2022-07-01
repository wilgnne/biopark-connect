#include "stdio.h"

/*
Uma confecção produz X blusas de lã e para isto gasta uma certa quantidade de novelos. 
Faça um algoritmo para calcular quantos novelos de lã ela gasta por blusa. 
*/
int main(int argc, char const *argv[])
{
    float blusas, la;

    printf("Insira a quantidade de brusas produzidas e a quantidade de novelos de la usados: ");
    scanf("%f%f", &blusas, & la);

    printf("Sao gastos %.2f novelos de la por blusa\n", la/blusas);

    return 0;
}
