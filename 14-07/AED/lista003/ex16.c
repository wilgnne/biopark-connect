#include "stdio.h"

/*
Escreva um algoritmo que simule o funcionamento de um caixa de supermercado. O
a. seu algoritmo deve receber do a informação de quantos produtos o cliente comprou e, para
cada produto, deverá ler o seu preço. Ao final, deverá informar quanto o cliente deve pagar
pelas compras.
*/
int main(int argc, char const *argv[])
{
    int n;
    float preco, soma = 0;

    printf("Informe o número de produtos: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Informe o preço do produto: ");
        scanf("%f", &preco);

        soma += preco;
    }

    printf("O valor total é: %.2f\n", soma);

    return 0;
}
