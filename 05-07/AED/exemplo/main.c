#include "stdio.h"

int main(int argc, char const *argv[])
{
    float valor, comissao_minima;
    printf("Insira o valor da transação: ");
    scanf("%f", &valor);

    comissao_minima = valor * 0.017;

    if (valor > 500000)
        printf("A comissão é de %.2f\n", 255 + (valor * 0.0009));
    else if (valor > 50000.01 && valor <= 500000)
        printf("A comissão é de %.2f\n", 155 + (valor * 0.0011));
    else if (valor > 20000.01 && valor <= 50000)
        printf("A comissão é de %.2f\n", 100 + (valor * 0.0022));
    else if (valor > 6250.01 && valor <= 20000)
        printf("A comissão é de %.2f\n", 76 + (valor * 0.0034));
    else if (valor > 2500.01 && valor < 6250)
        printf("A comissão é de %.2f\n", 56 + (valor * 0.0066));
    else if (comissao_minima < 9)
        printf("A comissão é de %.2f\n", 39.0);
    else
        printf("A comissão é de %.2f\n", 30 + comissao_minima);
    return 0;
}
