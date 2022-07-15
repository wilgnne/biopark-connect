#include "stdio.h"

/*
Escreva um algoritmo que exiba 20 vezes a mensagem informando qual vez está sendo escrita:
“Esta é a mensagem 1”, “Esta é a mensagem 2” ... “Esta é a mensagem 20”
*/
int main(int argc, char const *argv[])
{

    for (int i = 0; i < 20; i++)
    {
        printf("Esta é a mensagem %d\n", i + 1);
    }

    return 0;
}
