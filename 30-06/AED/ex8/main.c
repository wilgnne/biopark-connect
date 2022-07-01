#include "stdio.h"

/*
Faça um algoritmo para ler três notas de um aluno em uma disciplina e imprimir a sua média ponderada (as
notas tem pesos respectivos de 1, 2 e 3).
*/
int main(int argc, char const *argv[])
{
    float nota1, nota2, nota3;

    printf("Insira as 3 notas respectivamente: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    printf("A media e %f\n", (nota1 + nota2 * 2 + nota3 * 3) / 6.0);

    return 0;
}
