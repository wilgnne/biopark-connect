#include "stdio.h"

/*
Alguns países medem temperaturas em graus Celsius, e outros em graus Fahrenheit. Faça um algoritmo
para ler uma temperatura Celsius e imprimi-Ia em Fahrenheit (pesquise como fazer este tipo de conversão).  
*/
int main(int argc, char const *argv[])
{
    float celsius, fahrenheit;

    printf("Insira a temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    printf("A temperatura em graus Fahrenheit e de: %f\n", celsius * 9.0/5.0 + 32);

    return 0;
}
