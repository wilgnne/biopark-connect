#include "stdio.h"
#include "string.h"

int contain(char arr[], char c) {
    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] == c) return i;
    }
    return -1;
}

int main(int argc, char const *argv[])
{
    char string[1000];

    scanf("%[^\n]s", string);

    int TAM = strlen(string);
    if (TAM > 256) TAM = 256;

    int ocorrencias[TAM];
    char caracters[TAM];

    caracters[0] = '\0';

    for (int i = 0; string[i] != '\0'; i++)
    {
        int index = contain(caracters, string[i]);
        if (index >= 0) {
            ocorrencias[index] += 1;
        } else {
            int size = strlen(caracters);
            caracters[size] = string[i];
            caracters[size + 1] = '\0';
            ocorrencias[size] = 1;
        }
    }

    for (int i = 0; caracters[i] != '\0'; i++)
    {
        printf("O caracter %c aparece %d vezes\n", caracters[i], ocorrencias[i]);
    }
    
    return 0;
}
