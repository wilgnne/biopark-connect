#include "stdio.h"

int main(int argc, char const *argv[])
{
    int n;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    for (int i = 2; i >= 2 && i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d eh divisor de %d\n", i, n);
        }
    }

    return 0;
}
