#include <stdio.h>

#define TAM 3

typedef struct student{
    char nome[30];
    int matricula;
    float cr;
} aluno;

int main(){

   aluno lista[TAM];
   int i;

   for(i = 0; i < TAM; i++){
      printf("Informe o nome\n");
      scanf("%s", lista[i].nome);
      printf("Informe a matricula\n");
      scanf("%d", &lista[i].matricula);
      printf("Informe o CR\n");
      scanf("%f", &lista[i].cr);
   }

   for(i = 0; i < TAM; i++){
      if(lista[i].cr >= 5){
         printf("%s\n", lista[i].nome);
      }
   }


   return 0;
}
