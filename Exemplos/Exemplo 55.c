#include <stdio.h>

void relatorio(char narq[]);

int main(){

  relatorio("dados.txt");
  return 0;
}

void relatorio(char narq[]){
  FILE *arq;
  char nome[50];
  int idade;
  float peso, altura;

  arq = fopen(narq,"r");

  if (arq == NULL){
    printf("SOCORRO\n");
    exit(1);
  }

  fscanf(arq,"%s %d %f %f", nome, &idade, &peso, &altura);
  while(!feof(arq)){
    if (peso > 100){
        printf("%s %d\n", nome, idade);
    }
    fscanf(arq,"%s %d %f %f", nome, &idade, &peso, &altura);
  }
  fclose(arq);
}


