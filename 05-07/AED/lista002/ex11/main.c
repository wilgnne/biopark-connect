#include "stdio.h"

/*
Uma escola faz o pagamento de seus professores por hora/aula. Faça um algoritmo que solicite ao usuário, o
nível do professor e a quantidade de horas/aula ele tem na semana. Em seguida, calcule e exiba o salário de
um professor sabendo que a fórmula para o cálculo do salário é 𝑠𝑠𝑠𝑠𝑠𝑠 = 𝑣𝑣𝑠𝑠𝑠𝑠𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑠𝑠𝑣𝑣𝑣𝑣𝑠𝑠𝑠𝑠 ∗ 𝑞𝑞𝑞𝑞𝑞𝑞𝑣𝑣𝑣𝑣𝑠𝑠𝑠𝑠 ∗ 4.5. O valor
da hora/aula do professor é dado em função do seu nível:

Professor Nível 1 R$12,00 por hora/aula
Professor Nível 2 R$17,00 por hora/aula
Professor Nível 3 R$25,00 por hora/aula
*/

int main(int argc, char const *argv[])
{

    int nivel;
    float horasAula;

    printf("Insira o nível do professor: ");
    scanf("%d", &nivel);

    printf("Insira a quantidade de horas/aula: ");
    scanf("%f", &horasAula);

    if (nivel == 1)
        printf("O salário do professor é R$%.2f\n", horasAula * 12);
    else if (nivel == 2)
        printf("O salário do professor é R$%.2f\n", horasAula * 17);
    else if (nivel == 3)
        printf("O salário do professor é R$%.2f\n", horasAula * 25);
    else
        printf("Nível inválido\n");

    return 0;
}
