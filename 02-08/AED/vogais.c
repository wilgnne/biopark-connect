#include "stdio.h"


int eVogal(char c);
int eEspecial(char c);

int main(int argc, char const *argv[])
{
    char string[200];
    int vogais = 0, consoantes = 0;

    scanf("%[^\n]s", string);

    for (int i = 0; string[i] != '\0'; i++)
    {
        if (eEspecial(string[i])) continue;

        if (eVogal(string[i])) vogais++;
        else consoantes++;
    }
    
    printf("Encontrada(s) %d voga(l/is) e %d consoante(s)\n", vogais, consoantes);

    return 0;
}

int eEspecial(char c) {
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) return 0;
    return 1;
}

int eVogal(char c) {
    char vogais[11] = "aAeEiIoOuU";

    for (int i = 0; vogais[i] != '\0'; i++) 
    {
        if (c == vogais[i]) return 1;
    }
    return 0;
}
