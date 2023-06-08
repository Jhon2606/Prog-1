#include <stdio.h>

#define TAM 20

int main(){

    int i, fim = 19, copia, vet[TAM];

    for(i = 0; i < TAM; i++){
        printf("Digite um numero:\n");
        scanf("%d", &vet[i]);
    }
    printf("Vetor original:\n");
    for(i = 0; i < TAM; i++){
        printf("%d\n", vet[i]);
    }
    for(i = 0; i < 10; i++){
    copia = vet[i];
    vet[i] = vet[fim];
    vet[fim] = copia;
    fim--;
    }
    printf("Vetor modificado:\n");
    for(i = 0; i < TAM; i++){
        printf("%d\n", vet[i]);
    }


    return 0;
}
