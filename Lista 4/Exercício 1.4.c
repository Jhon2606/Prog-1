#include <stdio.h>

#define TAM 20

int main(){

    int vet1[TAM], vet2[TAM], vet3[TAM], i;

    for(i = 0; i < TAM; i++){
        printf("Informe um numero:\n");
        scanf("%d", &vet1[i]);
        printf("Informe outro numero:\n");
        scanf("%d", &vet2[i]);
        vet3[i] = vet1[i] + vet2[i];

    }
    for(i = 0; i < TAM; i++){
        printf("%d + %d = %d\n", vet1[i], vet2[i], vet3[i]);
    }


    return 0;
}
