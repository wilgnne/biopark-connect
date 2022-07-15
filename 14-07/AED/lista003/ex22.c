#include "stdio.h"
#include "string.h"

/*
 Um viajante decidiu se aventurar e percorrer toda a BR 101 de carro a partir do quilômetro 0 até
ultrapassar o quilômetro 4000, parando em várias cidades durante o

a. percurso. Crie um algoritmo que, em cada cidade que o viajante parar, leia a
b. informação da quilometragem percorrida e adicione ao valor da quilometragem total.
c. Encerre o algoritmo quando o valor da quilometragem total percorrida for igual ou
d. ultrapassar os 4000 km.
*/
int main(int argc, char const *argv[])
{
    int quilometragem, total = 0;

    do
    {
        printf("Informe a quilometragem percorrida: ");
        scanf("%d", &quilometragem);

        total += quilometragem;

        printf("\nQuilometragem total: %d KM\n\n", total);

    } while (total < 4000);

    return 0;
}
