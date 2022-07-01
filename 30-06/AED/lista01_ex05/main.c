#include "stdio.h"

/*
Um motorista deseja colocar no seu tanque X reais de gasolina. Escreva um algoritmo para ler o preço do
litro da gasolina e o valor do pagamento, e exibir quantos litros ele conseguiu colocar no tanque.
*/
int main(int argc, char const *argv[])
{
    float preco_litro, pagamento;

    printf("Insira o preco do litro e o valor pago: ");
    scanf("%f %f", &preco_litro, &pagamento);

    printf("A quantidade de litros comprada foi %f\n", pagamento / preco_litro);

    return 0;
}
