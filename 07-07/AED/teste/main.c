#include "stdio.h"
#include "stdlib.h"

void bin(unsigned n)
{
    if (n > 1)
        bin(n >> 1);

    printf("%d", n & 1);
}

int main(int argc, char const *argv[])
{
    char c;

    scanf("%c", &c);

    printf("%c ", c);
    bin(c);
    printf("\n");

    c = c | 96;

    printf("%c ", c);
    bin(c);
    printf("\n");

    return 0;
}
