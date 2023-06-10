#include <stdio.h>

#define TAM 10

int main() {
    int i, j;
    float vet[TAM], vet2[TAM], vet3[TAM], fatorial = 1;

    for(i = 0; i < TAM; i++) {
        printf("Digite um numero:\n");
        scanf("%f", &vet[i]);
    }

    for(i = 0; i < TAM; i++) {

        // Calcula o fatorial do número
        for(j = vet[i]; j > 1; j--) {
            fatorial *= j;
        }

        // Calcula o inverso do número
        float inverso = 1.0 / vet[i];

        // Armazena os resultados nos vetores vet2 e vet3
        vet2[i] = fatorial;
        vet3[i] = inverso;
    }

    // Exibe os valores calculados
    for(i = 0; i < TAM; i++) {
        printf("Numero: %.2f, Fatorial: %.2f, Inverso: %.2f\n", vet[i], vet2[i], vet3[i]);
    }

    return 0;
}







