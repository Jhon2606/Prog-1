#include <stdio.h>

#define TAM 5
int main(){

    int i, vet[TAM], vet1[TAM];

    for(i = 0; i < TAM; i++){
        printf("Digite os valores A:\n");
        scanf("%d", &vet[i]);
        printf("Digite os valores B:\n");
        scanf("%d", &vet1[i]);
    }
    for(i = 0; i < TAM; i++){
        printf("%d\n%d\n", vet[i], vet1[i]);
    }

    return 0;
}
