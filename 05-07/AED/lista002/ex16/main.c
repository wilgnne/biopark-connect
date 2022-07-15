#include "stdio.h"

/*
Um banco concederá um crédito especial aos seus clientes, variável com o saldo médio no último ano. Faça
um algoritmo que leia o saldo médio de um cliente e calcule o valor do crédito de acordo com a tabela abaixo.
Mostre uma mensagem informando o saldo médio e o valor do crédito.

Saldo Médio     Percentual
De 0 a 200      Nenhum crédito
De 201 a 400    20%
De 401 a 600    30%
Acima de 601    40%
*/

int main(int argc, char const *argv[])
{

    float saldo;

    printf("Insira o saldo médio do cliente: ");
    scanf("%f", &saldo);

    if (saldo <= 200)
        printf("O saldo médio do cliente é R$%.2f; o crédito é de R$0,00\n", saldo);
    else if (saldo <= 400)
        printf("O saldo médio do cliente é R$%.2f; o crédito é de R$%.2f\n", saldo, saldo * 0.20);
    else if (saldo <= 600)
        printf("O saldo médio do cliente é R$%.2f; o crédito é de R$%.2f\n", saldo, saldo * 0.30);
    else
        printf("O saldo médio do cliente é R$%.2f; o crédito é de R$%.2f\n", saldo, saldo * 0.40);

    return 0;
}
