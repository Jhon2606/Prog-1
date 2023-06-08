#include <stdio.h>

#define TAM 2
int main(){

    int i, vet[TAM], vet2[TAM], resultado;

    for(i = 0; i < TAM; i++){
        printf("Digite o valor de X:\n");
        scanf("%d", &vet[i]);
        printf("Digite o valor de Y:\n");
        scanf("%d", &vet2[i]);
    }
    for(i = 0; i < TAM; i++){
        if( vet[i] == vet2[i]){
            printf("O valor igual e o de: %d", vet[i]);
        }
    }
    return 0;
}
