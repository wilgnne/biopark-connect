#include "stdio.h"

int main(int argc, char const *argv[])
{
    int i = 1, n, soma;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    while (i <= n)
        soma += i++;

    printf("O somatorio de 1 ate %d eh: %d\n", n, soma);

    return 0;
}
