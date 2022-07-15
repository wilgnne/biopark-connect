#include "stdio.h"

int main(int argc, char const *argv[])
{
    int a;

    scanf("%d", &a);

    if (((a % 2 == 0) && a > 10) || ((a % 2 != 0) && a < 50))
        printf("SIM\n");
    else
        printf("NAO\n");

    return 0;
}
