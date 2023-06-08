#include <stdio.h>

#define A 2
#define D 6
typedef struct aluno{
int matricula;
char nome[20];
float medf, notf[D];
}Aluno;
int main(){

    Aluno la[A];
    int y, i, j, p;
    float x;

    printf("Mostre os alunos com notas acima de:");
    scanf("%d", &p);

    for(i = 0; i < A; i++){
        printf("Digite o nome do aluno:");
        scanf("%s", la[i].nome);
        printf("Digite a matricula:");
        scanf("%d", la[i].matricula);
        x = 0;
    for(j = 0; j < D; j++){
        printf("Digite a nota final na disciplina [%d]", j + 1);
        scanf("%f", &la[i].notf[j]);
        x += la[i].notf[j];
    }
    la[i].medf = x / D;
    }
    printf("Listagem de alunos:\n");
    for(i = 0; i < A; i++){
        printf("Aluno: %s\n", la[i].nome);
        printf("Matricula: %d\n", la[i].matricula);
        printf("Media final: %.2f\n", la[i].medf);
        printf("-----------------------\n");
    }
    printf("Alunos com a nota acima do que foi indicado:\n");
    for(i = 0; i < A; i++){
            if(la[i].medf > p){
                printf("Aluno: %s\n", la[i].nome);
                printf("Matricula: %d\n", la[i].matricula);
                printf("Nota: %.2f\n", la[i].medf);
                printf("-----------------------\n");

            }
    }
    printf("Escolha uma opcao:\n");
    printf("1 - Alterar notas de um aluno\n");
    printf("2 - Listar alunos com notas acima de %d\n", p);
    scanf("%d", &y);

    switch(y){
        case la[0].matricula
    }
    return 0;
}
