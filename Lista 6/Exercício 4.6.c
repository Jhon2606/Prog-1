#include <stdio.h>

#define O 2
#define A 1
typedef struct livros{
int cod[O], doado[O], pag[O];
char nomeobra[O][20], nomeautor[O][20], editora[O][20], palavrasch[O][20], assunto[O][20], area[20];
}Livros;
int main(){

    Livros la[O];
    int i, j, cod2, x = -1, y = 0;
/*
    for(i = 0; i < A; i++){
        printf("Digite a area e conhecimento:\n");
        scanf("%s", &la[i].area);
    for(j = 0; j < O; j++){
        printf("Digite o nome da obra:\n");
        scanf("%s", &la[i].nomeobra[j]);
        printf("Digite o nome do autor:\n");
        scanf("%s", &la[i].nomeautor[j]);
        printf("Digite a editora:\n");
        scanf("%s", &la[i].editora[j]);
        printf("Digite uma palavra chave:\n");
        scanf("%s", &la[i].palavrasch[j]);
        printf("Digite o assunto:\n");
        scanf("%s", &la[i].assunto[j]);
        printf("Digite o codigo do livro:\n");
        scanf("%d", &la[i].cod[j]);
        printf("Digite 1 se o livro foi doado e 0 caso nao:\n");
        scanf("%d", &la[i].doado[j]);
        printf("Digite o numero de paginas:\n");
        scanf("%d", &la[i].pag[j]);
    }

    }
    do{
    printf("Digite o codigo que deseja buscar:\n");
    scanf("%d", &cod2);

    for(i = 0; i < A; i++){
    for(j = 0; j < O; j++){
        if(cod2 == la[i].cod[j]){
            printf("O codigo %d encontra-se na posicao %d\n", cod2, j);
            x = 0;
        }
        }
    }
    }while(x == -1);
*/
    for(i = 0; i < A; i++){
        printf("Digite o a area:\n");
        scanf("%s", &la[i].area);
    for(j = 0; j < O; j++){
        printf("Digite o codigo do livro:\n");
        scanf("%d", &la[i].cod[j]);
    }
    }
    do {
        printf("Digite o código que deseja buscar:\n");
        scanf("%d", &cod2);

        y = 0;

        for (i = 0; i < A; i++) {
            for (j = 0; j < O; j++) {
                if (cod2 == la[i].cod[j]) {
                    printf("O código %d encontra-se na posição %d\n", cod2, j);

                }
            }
            }

        if (!y) {
            printf("Código inválido. Encerrando o programa.\n");
            break;
        }
    } while (1);

    return 0;
}
