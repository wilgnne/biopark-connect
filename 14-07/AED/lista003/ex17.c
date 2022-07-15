#include "stdio.h"
#include "string.h"

/*
. Em um restaurante Self-Service, o preço do quilo custa R$ 23,59. Crie um algoritmo
a. que, para cada cliente, leia o peso do prato e valor gasto com bebida e calcule o valor total
da conta que o cliente irá pagar [ valor da conta = bebida + (peso * 15) ]. Só encerre a
execução quando o peso do prato digitado for igual a 0 e o valor da bebida for também igual
a 0.
*/
int main(int argc, char const *argv[])
{
    float peso, bebida, total;

    do
    {
        printf("Informe o peso do prato: ");
        scanf("%f", &peso);
        printf("Informe o valor da bebida: ");
        scanf("%f", &bebida);
        total = bebida + (peso * 23.59);
        printf("O valor total é: %.2f\n", total);
    } while (peso != 0 || bebida != 0);

    return 0;
}
