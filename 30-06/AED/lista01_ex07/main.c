#include "stdio.h"

/*
Entrar com o dia e o mês de uma data e informar quantos dias se passaram desde o início do ano. Esqueça
a questão dos anos bissextos e considere sempre que um mês possui 30 dias
*/
int main(int argc, char const *argv[])
{
    int dia, mes;

    printf("Insira o dia e o mes respectivamente: ");
    scanf("%d %d", &dia, &mes);

    printf("Ja se passaram %d dias\n", (mes - 1) * 30 + dia);

    return 0;
}
