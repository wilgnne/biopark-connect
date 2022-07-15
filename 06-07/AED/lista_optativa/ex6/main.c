#include "stdio.h"
#include "math.h"

/*
Faça um programa que leia os valores correspondentes aos três lados a, b e c de um
triângulo. O programa deve então calcular a área A do triângulo utilizando a fórmula de
Heron:
A = √s(s − a)(s − b))(s − c)
onde
s = (a + b + c) / 2
Ao calcular a área pela fórmula de Heron e a fórmula da questão anterior, em alguns casos
obtemos valores ligeiramente diferentes. Qual o motivo disto?
*/

int main(int argc, char const *argv[])
{
    float a, b, c, s, area;

    printf("Digite os valores correspondentes aos três lados a, b e c de um triangulo: ");
    scanf("%f%f%f", &a, &b, &c);

    s = (a + b + c) / 2.0;
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    return 0;
}
