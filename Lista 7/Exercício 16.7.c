#include <stdio.h>

#define M 3
typedef struct aluno{

    int nome[20];
    float V[M], V1;
}Aluno;

int ler(Aluno li[], int tam);
float media(Aluno li[], int tam);
void exibir(Aluno li[], int tam);

int main(){

    Aluno la[100];
    int y1;


    y1 = ler(la, 100);
    media(la, y1);
    exibir(la, y1);

    return 0;
}


int ler(Aluno li[], int tam){

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
}
return i;
}


float media(Aluno li[], int tam){

    int i, j;
    for(i = 0; i < tam; i++){
            float X = 0;
        for(j = 0; j < tam; j++){
        X += li[i].V[j];
    }
        li[i].V1 = X/3;
}

    return i;
}
void exibir(Aluno li[], int tam){

    int i;

    for(i = 0; i < tam; i++){
            printf("O aluno %s tem media final de: %.2f\n", li[i].nome, li[i].V1);
        }
}
