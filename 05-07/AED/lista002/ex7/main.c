#include "stdio.h"

/*
Tendo como dados de entrada a altura e o sexo de uma pessoa, construa um algoritmo que calcule seu peso
ideal, utilizando as seguintes fórmulas:
● para homens: (72.7 * h) – 58;
● para mulheres: (62.1 * h) – 44.7.
*/

int main(int argc, char const *argv[])
{

    float altura;
    char sexo;

    printf("Insira a altura: ");
    scanf("%f", &altura);

    printf("Insira o sexo (M/F): ");
    scanf("%c", &sexo);

    if (sexo == 'M')
        printf("Seu peso ideal é %.2f\n", (72.7 * altura) - 58);
    else
        printf("Seu peso ideal é %.2f\n", (62.1 * altura) - 44.7);

    return 0;
}
