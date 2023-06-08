#include <stdio.h>

#define TAM 2
int main(){

    int op, i, resultado = 1;
    char vet[TAM][20], vet2[TAM][20], vet3[TAM][20], j[20];

    for(i = 0; i < TAM; i++){
        printf("Digite o nome:\n");
        scanf("%s", &vet[i]);
    }
    for(i = 0; i < TAM; i++){
        printf("Digite o email:\n");
        scanf("%s", &vet2[i]);
    }
    for(i = 0; i < TAM; i++){
        printf("Digite o telefone:\n");
        scanf("%s", &vet3[i]);
    }
        printf("Digite 1 para selecionar por nome:\n");
        printf("Digite 2 para selecionar por email:\n");
        printf("Digite 3 para selecionar por telefone:\n");
    do{

        scanf("%d", &op);

        switch(op){
    case 1:
        printf("Digite o nome:\n");
        scanf("%s", &j);
        for(i = 0; i < TAM; i++){
                resultado = strcmp(vet[i], j);
        if(resultado == 0){
            printf("%s %s %s\n", vet[i], vet2[i], vet3[i]);
            break;
        }
        }
        if(resultado == 1 || resultado == -1){
            printf("Nome nao encontrado.\n");
        }
        break;
    case 2:
        printf("Digite o email:\n");
        scanf("%s", &j);
        for(i = 0; i < TAM; i++){
                resultado = strcmp(vet2[i], j);
        if(resultado == 0){
            printf("%s %s %s\n", vet[i], vet2[i], vet3[i]);
        }
        }
        if(resultado == 1 || resultado == -1){
            printf("Nome nao encontrado.\n");
        }
        break;
    case 3:
        printf("Digite o telefone:\n");
        scanf("%s", &j);
        for(i = 0; i < TAM; i++){
                resultado = strcmp(vet3[i], j);
        if(resultado == 0){
            printf("%s %s %s\n", vet[i], vet2[i], vet3[i]);
        }
        }
        if(resultado == 1 || resultado == -1 ){
            printf("Nome nao encontrado.\n");
        }
        break;
    default:
        printf("Opcao invalida:\n");
    }
    }while(op != 0);


    return 0;
}
