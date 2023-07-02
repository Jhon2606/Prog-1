#include <stdio.h>

#define TAM 4


float vet(float *V);
float METADE(float *V);

int main() {
    float p[TAM];
    int i;

    vet(p);
    METADE(p);

    printf("Vetor dividido plea metade:\n");
    for(i = 0; i < TAM; i++){
        printf("%.2f ", p[i]);
    }
    printf("\n");

    return 0;
}

float vet(float *V){
    int i;

    for(i = 0; i < TAM; i++){
        printf("Digite o elemento %d:\n", i + 1);
        scanf("%f", &V[i]);
    }
}

float METADE(float *V){
    int i;

    for(i = 0; i < TAM; i++){
        V[i] = V[i] / 2;
    }
}
