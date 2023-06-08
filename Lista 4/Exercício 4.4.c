#include <stdio.h>

#define TAM 20
int main(){

    int i, vet[TAM], p;

    p = 0;
    for(i = 0; i < TAM; i++){
        printf("Digite um numero:\n");
        scanf("%d", &vet[i]);

        if(vet[i] % 2 == 0){
            p++;
        }
    }
    printf("A quantidade de numeros pares e de: %d\n", p);

    return 0;
}
