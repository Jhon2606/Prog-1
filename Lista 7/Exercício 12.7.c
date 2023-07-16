#include <stdio.h>
#define TAM 4

void vet(float V[], int tam);
void METADE(float V[], int tam);

int main() {

    float p[TAM];
    int i;

    vet(p, TAM);
    METADE(p, TAM);

    printf("Vetor dividido plea metade:\n");
    for(i = 0; i < TAM; i++){
        printf("%.2f ", p[i]);
    }
    printf("\n");

    return 0;
}

void vet(float V[], int tam){

    int i;

    for(i = 0; i < tam; i++){
        printf("Digite o elemento %d:\n", i + 1);
        scanf("%f", &V[i]);
    }
}

void METADE(float V[], int tam){

    int i;

    for(i = 0; i < tam; i++){
        V[i] = V[i] / 2;
    }
}
