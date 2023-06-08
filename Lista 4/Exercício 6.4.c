#include <stdio.h>

#define G 3
#define R 3
#define X 3

int main(){

    char vet[G];
    char vetr[R];
    char vetx[X];
    int i, p;

    p = 0;
    for(i = 0; i < G; i++){
        printf("Digite o gabarito:\n");
        scanf(" %c", &vet[i]);
        printf("Digite a resposta do aluno:\n");
        scanf(" %c", &vetr[i]);
        if( vet[i] == vetr[i]){
            p++;
        }
    }

    if(p >= 7){
        printf("Aprovado.\n");
    }
    else{
        printf("Reprovado.\n");
    }
    printf("O aluno acertou %d.\n", p);
    return 0;
}
