#include <stdio.h>

#define TAM 3,


int main() {
    int i, j, encontrou;
    int X[TAM], Y[TAM];

    // Leitura dos elementos do vetor X
    printf("Digite os elementos do vetor X:\n");
    for (i = 0; i < TAM; i++) {
        scanf("%d", &X[i]);
    }

    // Leitura dos elementos do vetor Y
    printf("Digite os elementos do vetor Y:\n");
    for (i = 0; i < TAM; i++) {
        scanf("%d", &Y[i]);
    }

    // Verificação da interseção
    printf("Elementos na intersecao: ");
    for (i = 0; i < TAM; i++) {
        encontrou = 0;
        for (j = 0; j < TAM; j++) {
            if (X[i] == Y[j]) {
                encontrou = 1;
                break;
            }
        }
        if (encontrou) {
            printf("%d ", X[i]);
        }
    }

    printf("\n");

    return 0;
}
