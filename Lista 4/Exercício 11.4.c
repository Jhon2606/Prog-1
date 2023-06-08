#include <stdio.h>

#define TAM 2
int main(){

    int i;
    float vet[TAM], vet2[TAM], vet3[TAM];

    for(i = 0; i < TAM; i++){
        printf("Digite um numero:\n");
        scanf("%f", &vet[i]);
    }
    for(i = 1; vet[i] > 1; vet[i] = vet[i] - 1){
        i = i * vet[i];
        vet2[i] = i;
    }

    vet3[i] = 1/vet[i];

    }
    for(i = 0; i < TAM; i++){
        printf("%.2f e %.2f");
    }

    return 0;

}
