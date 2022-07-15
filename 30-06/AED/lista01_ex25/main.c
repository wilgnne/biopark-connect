#include "stdio.h"

/*
Calcule o volume de uma caixa d'água cilíndrica. 
*/
int main(int argc, char const *argv[])
{
    float raio, altura, volume;

    printf("Insira o raio e a altura da caixa dagua: ");
    scanf("%f%f", &raio, &altura);

    volume = 3.14 * raio * raio * altura;

    printf("O volume da caixa dagua e de %f\n", volume);

    return 0;
}
