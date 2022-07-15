#include "stdio.h"

/*
Encontrar o dobro de um número caso ele seja positivo e o seu triplo caso seja negativo, imprimindo o resul-
tado.
*/

int main(int argc, char const *argv[])
{
    float a;

    printf("Insira um número: ");
    scanf("%f", &a);

    if (a > 0)
        printf("O dobro do número é %.2f\n", a * 2);
    else
        printf("O triplo do número é %.2f\n", a * 3);

    return 0;
}
