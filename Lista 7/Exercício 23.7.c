#include <stdio.h>
#define TAM 3

typedef struct aluno{

char nome[20];
int nota1, nota2, notat, presenca, med;

}Aluno;

void calculoaprov(Aluno la[], int tam);

int main(){

    Aluno la[TAM];

    calculoaprov(la, TAM);

return 0;
}

void calculoaprov(Aluno la[], int tam){

    int i, p = 0;

    for(i = 0; i < tam; i++){
        printf("Digite o nome do aluno:\n");
        scanf("%s", la[i].nome);
        printf("Digite a nota na P1:\n");
        scanf("%d", &la[i].nota1);
        printf("Digite a nota na P2:\n");
        scanf("%d", &la[i].nota2);
        printf("Digite a nota no trabalho:\n");
        scanf("%d", &la[i].notat);
        printf("Digite o percentual de presenca:\n");
        scanf("%d", &la[i].presenca);
        la[i].med = (la[i].nota1 + la[i].nota2) * 70 + la[i].notat * 30;
    }

    for(i = 0; i < tam; i++){
        if( la[i].presenca > 75 && la[i].med >= 6){
            p++;
        }
    }

    printf("%d alunos foram aprovados.\n", p);
}
