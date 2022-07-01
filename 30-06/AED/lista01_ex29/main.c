#include "stdio.h"

/*
Faça um algoritmo que receba o preço de um produto, calcule e mostre o novo preço, sabendo-se que este
sofreu um desconto de 10%.
*/
int main(int argc, char const *argv[])
{
    float preco;

    printf("Insira o valor do produto: ");
    scanf("%f", &preco);

    printf("O novo valor do produto e %.2f\n", preco - (preco * 0.1));

    return 0;
}