#include "stdio.h"
#include "vet.h"

void lerVetor(int vet[], int tam) {
    for(int i=0; i<tam; i++) {
        scanf("%d", &vet[i]);
    }
}

void zerarVetor(int vet[], int tam) {
    for(int i=0; i<tam; i++) {
        vet[i] = 0;
    }
}

void imprimirVetor(int vet[], int tam) {
    printf("vet[%d] = [", tam);
    for(int i=0; i<tam-1; i++) {
        printf("%d, ", vet[i]);
    }
    printf("%d]\n", vet[tam-1]);
}

int maiorElementoVetor(int vet[], int tam) {
    int maior = vet[0];
    for(int i=1; i<tam; i++) {
        if (vet[i] > maior) {
            maior = vet[i];
        }
    }

    return maior;
}

int menorElementoVetor(int vet[], int tam) {
    int menor = vet[0];
    for(int i=1; i<tam; i++) {
        if (vet[i] < menor) {
            menor = vet[i];
        }
    }

    return menor;
}

double mediaElementosVetor(int vet[], int tam) {
    double media = 0;
    for(int i=0; i<tam; i++) {
       media += vet[i] / (double)tam;
    }

    return media;
}
