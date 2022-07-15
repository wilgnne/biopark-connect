#include "stdio.h"

/*
Num dia de sol, você deseja medir a altura de um prédio, porém, a trena não é suficientemente longa.
Assumindo que seja possível medir sua sombra e a do prédio no chão, e que você lembre da sua altura, faça um
algoritmo para ler os dados necessários e calcular a altura do prédio.
*/
int main(int argc, char const *argv[])
{
    float sombra_predio, sua_sombra, sua_altura, altura_do_predio;

    printf("Insira respectivamente o tamanho da sombra do predio, sua altura, e o tamanho da sua sombra\n");

    scanf("%f%f%f", &sombra_predio, &sua_altura, &sua_sombra);

    altura_do_predio = (sombra_predio * sua_altura) / sua_sombra;

    printf("A altura do predio e de aproximadamente %.2f metros\n", altura_do_predio);

    return 0;
}
