#include "stdio.h"
#include "math.h"

/*
Uma pessoa pode se aposentar pelo INSS caso esteja em alguma das situações abaixo:

• É do sexo masculino, possui pelo menos 65 anos, e pelo menos 10 anos de contribuição.
• É do sexo masculino, possui pelo menos 63 anos, e pelo menos 15 anos de contribuição.
• É do sexo feminino, possui pelo menos 63 anos, e pelo menos 10 anos de contribuição.
• É do sexo feminino, possui pelo menos 61 anos, e pelo menos 15 anos de contribuição.

Crie um programa para ler um caracter ’M’ ou ’F’ que representa o sexo de um indivíduo,
ler a sua idade, e seu tempo de contribuição. O programa deverá então imprimir “Apo-
sentável” caso o indivíduo se enquadrar em uma das situações acima. Caso contrário o
programa deverá imprimir “Não Aposentável”.
*/

int main(int argc, char const *argv[])
{
    char sexo;
    int idade, tempo;

    printf("Digite M ou F: ");
    scanf("%c", &sexo);

    printf("Digite a idade: ");
    scanf("%d", &idade);

    printf("Digite o tempo de contribuição: ");
    scanf("%d", &tempo);

    if (sexo == 'M')
    {
        if (idade >= 65 && tempo >= 10)
            printf("Apo-sentável");
        else if (idade >= 63 && tempo >= 15)
            printf("Apo-sentável");
        else
            printf("Não Aposentável");
    }
    else
    {
        if (idade >= 63 && tempo >= 10)
            printf("Apo-sentável");
        else if (idade >= 61 && tempo >= 15)
            printf("Apo-sentável");
        else
            printf("Não Aposentável");
    }

    return 0;
}
