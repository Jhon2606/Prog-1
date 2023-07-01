#include <stdio.h>

#define d1 3
#define d2 2

typedef struct aluno{
   int matricula;
   char nome[50];
} Alunoprog;

void preencheVET(int VET[], int tam);
void imprimeVET(int VET[], int tam);
void preencheMAT(int MAT[][d2],int tam);
void imprimeMAT(int MAT[][d2],int tam);
void imprimedados(Alunoprog x);
void preencheListaAlunos(Alunoprog la[],int tam);

int main(){

   int i, V1[d1], V2[d2];
   int M1[d1][d2], M2[d2][d2];
   Alunoprog a, lista_alunos[d2];

   preencheVET(V1,d1);
   imprimeVET(V1,d1);
   preencheVET(V2,d2);
   imprimeVET(V2,d2);

   preencheMAT(M1,d1);
   imprimeMAT(M1,d1);
   preencheMAT(M2,d2);
   imprimeMAT(M2,d2);

   printf("Informe a matricula\n");
   scanf("%d",&a.matricula);
   printf("Informe o nome\n");
   scanf("%s",a.nome);
   imprimedados(a);

   preencheListaAlunos(lista_alunos,d2);
   for(i = 0; i < d2; i++){
      imprimedados(lista_alunos[i]);
   }

   return 0;
}

void preencheVET(int VET[], int tam){

   int i;
   for (i = 0; i < tam; i++){
      printf("Informe um numero\n");
      scanf("%d",&VET[i]);
   }
}

void imprimeVET(int VET[], int tam){

   int i;
   for (i = 0; i < tam; i++){
      printf("%d ", VET[i]);
   }
   printf("\n");
}

void preencheMAT(int MAT[][d2],int tam){
   int i, j;
   for (i = 0; i < tam; i++){
      for (j = 0; j < d2; j++){
        printf("Informe um numero\n");
        scanf("%d",&MAT[i][j]);
      }
   }
}

void imprimeMAT(int MAT[][d2],int tam){
   int i, j;
   for (i = 0; i < tam; i++){
      for (j = 0; j < d2; j++){
        printf("%d ", MAT[i][j]);
      }
      printf("\n");
   }
}

void imprimedados(Alunoprog x){
   printf("O aluno %s tem matricula %d\n",x.nome,x.matricula);
}

void preencheListaAlunos(Alunoprog la[],int tam){
  int i;
  for(i = 0; i < tam; i++){
    printf("Informe a matricula\n");
    scanf("%d",&la[i].matricula);
    printf("Informe o nome\n");
    scanf("%s",la[i].nome);
  }

}
