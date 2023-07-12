#include <stdio.h>

#define TAM 3

typedef struct pessoa{
   char nome[50];
   int idade;
   float peso, altura;
} Pessoa;

void cadastro(Pessoa lista[], int qtd);
void gravar(Pessoa lista[], int qtd);

int main(){

  Pessoa lp[TAM];

  cadastro(lp,TAM);
  gravar(lp,TAM);

  return 0;
}

void cadastro(Pessoa lista[], int qtd){
  int i;
  for(i = 0; i < qtd; i++){
    printf("Nome:\n");
    scanf("%s", lista[i].nome);
    printf("Idade:\n");
    scanf("%d", &lista[i].idade);
    printf("Peso:\n");
    scanf("%f", &lista[i].peso);
    printf("Altura:\n");
    scanf("%f", &lista[i].altura);
  }
}

void gravar(Pessoa lista[], int qtd){
   FILE *arq;
   int i;

   arq = fopen("dados.txt","w");

   if(arq == NULL){
      printf("SOCORRO\n");
      exit(1);
   }

   for(i = 0; i < qtd; i++){
     fprintf(arq,"%s %d %f %f\n", lista[i].nome, lista[i].idade, lista[i].peso, lista[i].altura);
   }

   fclose(arq);
}
