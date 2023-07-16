#include <stdio.h>

#define M 3
#define G 10
typedef struct aluno{
    int nome[20];
    float V[M], V1;
}Aluno;

void ler(Aluno li[], int tam, int *p);
void media(Aluno li[], int tam, int g);
void exibir(Aluno li[], int p);
int main(){

    Aluno la[G];
    int P = 0;

    ler(la, G, &P);
    media(la, P, M);
    exibir(la, P);

    return 0;
}

void ler(Aluno li[], int tam, int *p){

    int i;

    for(i = 0; i < tam; i++){
        printf("Nome do aluno (ou 'FIM' para encerrar): ");
        scanf("%s", li[i].nome);

        if (strcmp(li[i].nome, "FIM") == 0) {
            break;
        }
        for (int j = 0; j < M; j++) {
            printf("Nota na prova %d: ", j + 1);
            scanf("%f", &li[i].V[j]);
        }
        (*p)++;
    }
}

void media(Aluno li[], int tam, int m){

    int i, j;
    for(i = 0; i < tam; i++){
            float X = 0;
        for(j = 0; j < m; j++){
        X += li[i].V[j];
    }
        li[i].V1 = X/m;
    }
}

void exibir(Aluno li[], int p){

    int i;

    for(i = 0; i < p; i++){
            printf("O aluno %s tem media final de: %.2f\n", li[i].nome, li[i].V1);
        }
}
