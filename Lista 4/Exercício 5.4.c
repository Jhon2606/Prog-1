#include <stdio.h>

#define TAM 3
int main(){

    int i, vet[TAM], menor, posicao;

    menor = vet[0];
    for(i = 0; i < TAM; i++){
        printf("Digite um numero:\n");
        scanf("%d", &vet[i]);

        if(vet[i] < menor){
            menor = vet[i];
            posicao = i;
        }
    }
    printf("O menor elemento e %d e esta na posicao %d", menor, posicao);

    return 0;
}
