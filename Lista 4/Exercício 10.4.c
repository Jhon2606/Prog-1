#include <stdio.h>

#define TAM 2
int main(){

    int i;
    char vet[TAM][10];
    float vet2[TAM], vet3[TAM];

    for(i = 0; i < TAM; i++){
        printf("Digite o nome da pessoa:\n");
        scanf("%s", vet[i]);
        printf("Digite o salario:\n");
        scanf("%f", &vet2[i]);

        vet3[i] = ((vet2[i] * 0.08) + vet2[i]);

    }
    for(i = 0; i < TAM; i++){
        printf("O novo salario do %s e de: %.2f\n",vet[i],vet3[i]);
        printf("O salario aterior do %s era de %.2f e o novo e de %.2f\n", vet[i], vet2[i], vet3[i]);
    }


    return 0;
}
