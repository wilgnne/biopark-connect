#include "stdio.h"

/*
Para uma lanchonete, escrever um algoritmo que leia o código do item pedido, a quantidade e calcule o valor
a ser pago por aquele lanche. Considere que a cada execução somente será calculado um item. O cardápio
é o seguinte:

Produto             Preço
Cachorro quente     R$11,00
Bauru               R$ 8,50
Misto Quente        R$ 8,00
Hamburger           R$ 9,00
Cheeseburger        R$10,00
Refrigerante        R$ 4,50
*/

int main(int argc, char const *argv[])
{

    int codigo, quantidade;

    printf("Insira o código do item pedido: ");
    scanf("%d", &codigo);

    printf("Insira a quantidade do item pedido: ");
    scanf("%d", &quantidade);

    if (codigo == 1)
        printf("O valor total a ser pago é R$ %.2f\n", quantidade * 11);
    else if (codigo == 2)
        printf("O valor total a ser pago é R$ %.2f\n", quantidade * 8.5);
    else if (codigo == 3)
        printf("O valor total a ser pago é R$ %.2f\n", quantidade * 8);
    else if (codigo == 4)
        printf("O valor total a ser pago é R$ %.2f\n", quantidade * 9);
    else if (codigo == 5)
        printf("O valor total a ser pago é R$ %.2f\n", quantidade * 10);
    else if (codigo == 6)
        printf("O valor total a ser pago é R$ %.2f\n", quantidade * 4.5);
    else
        printf("Código inválido\n");

    return 0;
}
