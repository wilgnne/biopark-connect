#include "stdio.h"

/*
Elabore um algoritmo que calcule o que deve ser pago por um produto, considerando o preço normal de eti-
queta e a escolha da condição de pagamento. Utilize os códigos da tabela a seguir para ler qual a condição
de pagamento escolhida e efetuar o cálculo adequado.
Código Condição de pagamento
a) À vista em dinheiro ou cheque, recebe 10% de desconto
b) À vista no cartão de crédito, recebe 15% de desconto
c) Em duas vezes, preço normal de etiqueta sem juros
d) Em duas vezes, preço normal de etiqueta mais juros de 10%
*/

int main(int argc, char const *argv[])
{

    float preco;
    char condicao;

    printf("Insira o preço do produto:");
    scanf("%f", &preco);

    printf("Formas de pagamento:\n");
    printf("a) À vista em dinheiro ou cheque, recebe 10% de desconto\n");
    printf("b) À vista no cartão de crédito, recebe 15% de desconto\n");
    printf("c) Em duas vezes, preço normal de etiqueta sem juros\n");
    printf("d) Em duas vezes, preço normal de etiqueta mais juros de 10%\n");

    printf("Insira a condição de pagamento:");
    scanf("%c", &condicao);

    if (condicao == 'a')
        printf("O valor a pagar é: %.2f\n", preco * 0.9);
    else if (condicao == 'b')
        printf("O valor a pagar é: %.2f\n", preco * 0.85);
    else if (condicao == 'c')
        printf("O valor a pagar é: %.2f\n", preco);
    else if (condicao == 'd')
        printf("O valor a pagar é: %.2f\n", preco * 1.1);

    return 0;
}
