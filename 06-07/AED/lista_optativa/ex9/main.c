#include "stdio.h"
#include "math.h"

/*
9. Escreva um programa lê três números e os imprime em ordem (ordem crescente).
*/

int main(int argc, char const *argv[])
{
    float n1, n2, n3;

    printf("Digite 3 numeros: ");
    scanf("%f%f%f", &n1, &n2, &n3);

    if (n1 < n2 && n1 < n3)
    {
        if (n2 < n3)
        {
            printf("%f %f %f\n", n1, n2, n3);
        }
        else
        {
            printf("%f %f %f\n", n1, n3, n2);
        }
    }
    else if (n2 < n1 && n2 < n3)
    {
        if (n1 < n3)
        {
            printf("%f %f %f\n", n2, n1, n3);
        }
        else
        {
            printf("%f %f %f\n", n2, n3, n1);
        }
    }
    else
    {
        if (n1 < n2)
        {
            printf("%f %f %f\n", n3, n1, n2);
        }
        else
        {
            printf("%f %f %f\n", n3, n2, n1);
        }
    }

    return 0;
}
