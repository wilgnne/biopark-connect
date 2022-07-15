#include "stdio.h"
#include "string.h"

/*
Escreva um algoritmo que leia a quantidade de alunos em uma turma. Em seguida,
a. para cada aluno, leia a informação de suas 2 notas, calcule a média e informe se o
b. aluno está aprovado ou reprovado. O aluno está aprovado apenas se a sua média for maior
ou igual a 6.
*/
int main(int argc, char const *argv[])
{
    int n, nota1, nota2, media;

    printf("Informe a quantidade de alunos: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Informe a primeira nota: ");
        scanf("%d", &nota1);
        printf("Informe a segunda nota: ");
        scanf("%d", &nota2);
        media = (nota1 + nota2) / 2;
        if (media >= 6)
        {
            printf("Aluno aprovado\n");
        }
        else
        {
            printf("Aluno reprovado\n");
        }
    }

    return 0;
}
