#include "stdio.h"
#include "string.h"

/*
 O restaurante da questão 17 realiza reservas de mesas através de ligações telefônicas e possui 50
mesas disponíveis para reserva. Dessas mesas, 25 são na área de fumantes e 25 na área de não
fumantes. Para cada ligação recebida, o restaurante deve verificar se a reserva é para a mesa na
área de fumantes ou de não fumantes e contabilizar a quantidade de mesas restantes disponíveis
em cada área. Construa um algoritmo que realize a reserva das mesas e encerre a execução
quando não houver mais mesas disponíveis (nem na área de fumantes, nem na área de não
fumantes).
*/
int main(int argc, char const *argv[])
{
    int fumantes = 25, nao_fumantes = 25, tipo;

    do
    {
        printf("A quantidade de mesas na área de fumantes é: %d\n", nao_fumantes);
        printf("A quantidade de mesas na área de não fumantes é: %d\n", fumantes);
        printf("\n\n");
        printf("Reserva de mesas:\n");
        printf("1 - Fumantes\n");
        printf("2 - Não fumantes\n");
        scanf("%d", &tipo);
        printf("\n");

        switch (tipo)
        {
        case 1:
        {
            if (nao_fumantes > 0)
            {
                nao_fumantes--;
            }
            else
            {
                printf("\n\nNão há mesas disponíveis na área de não fumantes\n\n");
            }
            break;
        }
        case 2:
        {
            if (fumantes > 0)
            {
                fumantes--;
            }
            else
            {
                printf("\n\nNão há mesas disponíveis na área de fumantes\n\n");
            }
            break;
        }
        }
    } while (nao_fumantes > 0 || fumantes > 0);

    return 0;
}
