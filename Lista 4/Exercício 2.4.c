#include <stdio.h>

#define TAM 3

int main(){

    int i, encontrado = 0;
    char k, vet[TAM];

    for(i = 0; i < TAM; i++){
        printf("Informe um caracter:\n");
        scanf(" %c",&vet[i]);

        if(vet[i] == 'k'){
            printf("Encontrei k na posicao %d\n", i);
            encontrado = 1;
        }

        }
        if(!encontrado){
            printf("Nao encontrei a letra k no vetor.\n");
        }
    return 0;
}
