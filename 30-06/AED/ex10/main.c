#include "stdio.h"
#include "math.h"

/*
Construa um algoritmo para calcular a distância entre dois pontos do plano cartesiano. Cada ponto é um par
ordenado (x,y).
*/
int main(int argc, char const *argv[])
{
    float p1x, p1y, p2x, p2y;
    float xDiff, yDiff, distancia;

    printf("Insira as coordenadas x e y do primeiro ponto: ");
    scanf("%f %f", &p1x, &p1y);

    printf("Insira as coordenadas x e y do segundo ponto: ");
    scanf("%f %f", &p2x, &p2y);

    xDiff = (p2x - p1x);
    yDiff = (p2y - p1y);
    distancia = pow(xDiff * xDiff + yDiff * yDiff, 0.5);

    printf("A distancia entre os pontos e %f\n", distancia);

    return 0;
}
