#include <stdio.h>

#define TAM 3
int main(){

    int i, op;
    float vet3[TAM], vet1[TAM], vet2[TAM];

    for(i = 0; i < TAM; i++){
        printf("Digite os primeiros numeros:\n");
        scanf("%f", &vet1[i]);
    }
    for(i = 0; i < TAM; i++){
        printf("Digite os proximos numeros:\n");
        scanf("%f", &vet2[i]);
    }
    do{
    printf("Digite 1 para somar\n");
    printf("Digite 2 para subtrair\n");
    printf("Digite 3 para multiplicar\n");
    printf("Digite 4 para dividir\n");
    scanf("%d", &op);
    }while((op < 1) || (op > 4));

    switch(op){
    case 1:
        for(i = 0; i < TAM; i++){
            vet3[i] = vet1[i] + vet2[i];
            printf("%.f + %.f = %.f\n", vet1[i], vet2[i], vet3[i]);
        }
        break;
    case 2:
        for(i = 0; i < TAM; i++){
            vet3[i] = vet1[i] - vet2[i];
            printf("%.f - .f = %.f\n", vet1[i], vet2[i], vet3[i]);
        }
        break;
    case 3:
        for(i = 0; i < TAM; i++){
            vet3[i] = vet1[i] * vet2[i];
            printf("%.f x %.f = %.f\n", vet1[i], vet2[i], vet3[i]);
        }
        break;
    case 4:
    for(i = 0; i < TAM; i++){
            vet3[i] = vet1[i] / vet2[i];
            printf("%.f / %.f = %.2f\n", vet1[i], vet2[i], vet3[i]);
        }
        break;
    default:
        printf("Opcao invalida.\n");

    }

    return 0;
}
