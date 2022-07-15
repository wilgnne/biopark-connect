#include "stdio.h"

int main(int argc, char const *argv[])
{
    int i = 1, n, soma;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    for (int j = 1; j <= n; j++)
    {
        for (i = 1, soma = 0; i <= j; soma += i++)
            ;

        printf("O somatorio de 1 ate %d eh: %d\n", j, soma);
    }

    return 0;
}
