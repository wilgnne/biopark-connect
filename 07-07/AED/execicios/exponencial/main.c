#include "stdio.h"

int main(int argc, char const *argv[])
{
    int a, b, r = 1;

    printf("Digite o valor de a e b: ");
    scanf("%d %d", &a, &b);

    while (b != 0)
    {
        r *= a;
        b--;
    }

    printf("a^b = %d\n", r);

    return 0;
}
