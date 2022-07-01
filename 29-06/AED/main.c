#include "stdio.h"
#include "stdlib.h"

int main(int argc, char const *argv[])
{
    double x, y;

    scanf("%lf%lf", &x, &y);

    printf("Soma: %lf\n", x + y);
    printf("Diferenca: %lf\n", x - y);
    printf("Multiplicacao: %lf\n", x * y);
    printf("Divisao: %lf\n", x / y);

    printf("%ld %ld\n", (long int)&x, (long int)&y);

    return 0;
}
