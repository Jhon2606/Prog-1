#include <stdio.h>

#define TAM 10
int main(){

    int vet[TAM], i;

    for(i = 0; i < TAM; i++){
        printf("Digite um numero:\n");
        scanf("%d", &vet[i]);
    }
    for(i = TAM; i >= 0; i--){
        printf("%d\n", vet[i]);
    }
    return 0;
}
