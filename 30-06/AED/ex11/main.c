#include "stdio.h"

/*
Uma fábrica controla o tempo de trabalho sem acidentes pela quantidade de dias. Faça um algoritmo para
converter este tempo em anos, meses e dias. Assuma que cada mês possui sempre 30 dias
*/
int main(int argc, char const *argv[])
{
    int diasSemAcidadente, anos, meses, dias;

    printf("Insira a quantidade de dias sem acidentes: ");
    scanf("%d", &diasSemAcidadente);

    anos = diasSemAcidadente / 365;
    diasSemAcidadente = diasSemAcidadente - (anos * 365);

    meses = diasSemAcidadente / 30;
    diasSemAcidadente = diasSemAcidadente - (meses * 30);

    dias = diasSemAcidadente;

    printf("Estamos a %d anos e %d meses e %d dias sem acidentes\n", anos, meses, dias);

    return 0;
}
