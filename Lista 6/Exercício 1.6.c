#include <stdio.h>

#define NA 2
#define ND 2

typedef struct aluno{
char nome[20], nomed[ND][20];
float media[ND], mediaf[ND], pf[ND];
}Aluno;

int main(){

    Aluno la[NA];
    int i, j;

    for(i = 0; i < NA; i++){
        printf("Informe o  nome do aluno:\n");
        scanf("%s", la[i].nome);
    for(j = 0; j < ND; j++){
        printf("Digite o nome da disciplina:\n");
        scanf("%s", la[i].nomed[j]);
        printf("Digite a media:\n");
        scanf("%f", &la[i].media[j]);
        if(la[i].media[j] >= 7){
            la[i].pf[j] = 0;
            la[i].mediaf[j] = la[i].media[j];

        }
        else{
            printf("Digite a nota da prova final:\n");
            scanf("%f", &la[i].pf[j]);
            la[i].mediaf[j] = (la[i].media[j] + la[i].pf[j]) / 2;
        }

    }
    }
    printf("Alunos reprovados:\n");
    for(i = 0; i < NA; i++){
        for(j = 0; j < ND; j++){
            if(la[i].mediaf[j] < 5){
                printf("O aluno %s reprovou nas diciplinas: %s\n", la[i].nome, la[i].nomed[j]);
            }
        }
    }

    return 0;
}
