#include "stdio.h"
#include "vet.h"

void main() {
    int vetor[5];

    imprimirVetor(vetor, 5);
    zerarVetor(vetor, 5);

    imprimirVetor(vetor, 5);
    lerVetor(vetor, 5);

    imprimirVetor(vetor, 5);

    printf("Maior valor %d\n", maiorElementoVetor(vetor, 5));
    printf("Menor valor %d\n", menorElementoVetor(vetor, 5));

    printf("Media %lf\n", mediaElementosVetor(vetor, 5));
}
