#include <stdio.h>

#define NA 2
#define ND 2

typedef struct aluno{
    int matricula;
    char nome[50];
    char nomesD[ND][50];
    float media[ND],pf[ND],MF[ND];
    int faltas[ND];
} Aluno;

int main(){

   Aluno la[NA];
   int i, j;

   for (i = 0; i < NA; i++){
      printf("Informe o nome do aluno\n");
      scanf("%s", la[i].nome);
      printf("Informe a matricula\n");
      scanf("%d", &la[i].matricula);
      for (j = 0; j < ND; j++){
         printf("Informe o nome da disciplina\n");
         scanf("%s", la[i].nomesD[j]);
         printf("Informe media antes da PF\n");
         scanf("%f", &la[i].media[j]);
         if (la[i].media[j] >= 7){
            la[i].pf[j] = 0;
            la[i].MF[j] = la[i].media[j];
         }
         else{
            printf("Nota da Final\n");
            scanf("%f", &la[i].pf[j]);
            la[i].MF[j] = (la[i].media[j] + la[i].pf[j])/2;
         }
         printf("Numero de Faltas\n");
         scanf("%d", &la[i].faltas[j]);
      }
   }

   printf("ALUNOS REPROVADOS\n");

   for(i = 0; i < NA; i++){
      for (j = 0; j < ND; j++){
        if (la[i].faltas[j] > 15){
            printf("%s %d %s REP FALTA\n",la[i].nome,la[i].matricula,la[i].nomesD[j]);
        }
        else if(la[i].MF[j] < 5){
            printf("%s %d %s REP NOTA\n",la[i].nome,la[i].matricula,la[i].nomesD[j]);
        }
      }
   }

   return 0;
}
