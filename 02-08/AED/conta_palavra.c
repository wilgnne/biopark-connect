#include "stdio.h"
#include "string.h"
#include "ctype.h"

int main(int argc, char const *argv[])
{
    char string[200];
    int palavras = 0, anterior_e_palavra = 0;

    scanf("%[^\n]s", string);

    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] == ' ' || string[i] == ',') {
            anterior_e_palavra = 0;
        }
        else if (anterior_e_palavra == 1) continue; 
        else if (toupper(string[i]) >= 'A' && toupper(string[i]) <= 'Z') {
            anterior_e_palavra = 1;
            palavras++;
        }
    }

    printf("%d palavras encontradas\n", palavras);    

    return 0;
}
