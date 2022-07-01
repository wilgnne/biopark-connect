#include "stdio.h"

/*
Faça um algoritmo que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
a. a idade dessa pessoa em anos;
b. a idade dessa pessoa em meses;
c. a idade dessa pessoa em dias
d. a idade dessa pessoa em semanas. 

*/
int main(int argc, char const *argv[])
{
    int ano_nas, ano_att;
    int em_anos, em_meses, em_dias, em_semanas;

    printf("Insira o ano de nascimento e o ano atual: ");
    scanf("%d%d", &ano_nas, &ano_att);

    em_anos = ano_att - ano_nas;
    em_meses = em_anos * 12;
    em_dias = em_meses * 30;
    em_semanas = em_dias / 7;

    printf("Idade em anos: %d\n", em_anos);
    printf("Idade em meses: %d\n", em_meses);
    printf("Idade em dias: %d\n", em_dias);
    printf("Idade em semanas: %d\n", em_semanas);

    return 0;
}
