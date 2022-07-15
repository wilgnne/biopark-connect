#include "stdio.h"

/*
Escreva um algoritmo que leia o número de identificação do aluno, 3 notas obtidas e calcule a média aritmé-
tica obtida pelo aluno. Ao final informe se o aluno foi aprovado direto, ficou em recuperação ou foi reprovado
por nota.
*/

int main(int argc, char const *argv[])
{

    int id;
    float n1, n2, n3, media;

    printf("Insira o número de identificação do aluno:");
    scanf("%d", &id);

    printf("Insira as 3 notas obtidas pelo aluno:");
    scanf("%f %f %f", &n1, &n2, &n3);

    media = (n1 + n2 + n3) / 3.0;

    if (media >= 7)
        printf("O aluno %d foi aprovado com média %.2f\n", id, media);
    else
        printf("O aluno %d foi reprovado com média %.2f\n", id, media);

    return 0;
}
