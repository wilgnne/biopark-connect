#include "stdio.h"
#include "math.h"

/*
Faça um programa que lê um caracter ’F’ ou ’C’, que indica se o próximo número a ser
digitado corresponde a temperatura em Fahrenheit ou Celsius. Em seguida o programa
deve ler o valor da temperatura e então imprimir o valor correspondente da temperatura
na outra unidade de medida. Obs.: (C = 5/9 · (F − 32)).
*/

int main(int argc, char const *argv[])
{
    char fc;
    float temp;

    printf("Digite F ou C: ");
    scanf("%c", &fc);

    printf("Digite a temperatura: ");
    scanf("%f", &temp);

    if (fc == 'F')
    {
        printf("%.2f F eh %.2f C\n", temp, (temp - 32) * 5 / 9);
    }
    else if (fc == 'C')
    {
        printf("%.2f C eh %.2f F\n", temp, temp * 9 / 5 + 32);
    }

    return 0;
}
