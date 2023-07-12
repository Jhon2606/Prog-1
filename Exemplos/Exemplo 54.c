#include <stdio.h>

typedef struct pessoa{
   char nome[50];
   int idade;
   float peso, altura;
} Pessoa;

void cadastro();
void gravar(Pessoa p);

int main(){

  int op;

  printf("Deseja Cadastrar uma pessoa 1 SIM 0 NAO\n");
  scanf("%d",&op);
  while(op != 0){
     cadastro();
     printf("Deseja Cadastrar uma pessoa 1 SIM 0 NAO\n");
     scanf("%d",&op);
  }

  return 0;
}

void cadastro(){
    Pessoa p;

    printf("Nome:\n");
    scanf("%s", p.nome);
    printf("Idade:\n");
    scanf("%d", &p.idade);
    printf("Peso:\n");
    scanf("%f", &p.peso);
    printf("Altura:\n");
    scanf("%f", &p.altura);

    gravar(p);

}

void gravar(Pessoa p){
   FILE *arq;

   arq = fopen("dados.txt","a");

   if(arq == NULL){
      printf("SOCORRO\n");
      exit(1);
   }

   fprintf(arq,"%s %d %f %f\n", p.nome, p.idade, p.peso, p.altura);

   fclose(arq);
}
