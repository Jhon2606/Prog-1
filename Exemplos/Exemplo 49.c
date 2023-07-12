#include <stdio.h>

#define TAM 5

void preenche(int V[], int qtd);
int menor(int V[], int qtd);
int maior(int V[], int qtd);
int soma(int V[], int qtd);

int main(){

   int VET[TAM];

   preenche(VET,TAM);
   printf("Menor %d\n",menor(VET,TAM));
   printf("Maior %d\n",maior(VET,TAM));
   printf("Soma %d\n",soma(VET,TAM));
   return 0;
}

void preenche(int V[], int qtd){
  int i;
  for (i = 0; i < qtd; i++){
    printf("Numero\n");
    scanf("%d",&V[i]);
  }
}

int menor(int V[], int qtd){
  int i, m;

  m = V[0];
  for (i = 1; i < qtd; i++){
     if (V[i] < m){
        m = V[i];
     }
  }
  return m;
}

int maior(int V[], int qtd){
  int i, m;

  m = V[0];
  for (i = 1; i < qtd; i++){
     if (V[i] > m){
        m = V[i];
     }
  }
  return m;
}

int soma(int V[], int qtd){
  int i, s;

  s = V[0];
  for (i = 1; i < qtd; i++){
     s = s + V[i];
  }
  return s;
}
