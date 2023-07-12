#include <stdio.h>

#define TAM 5

void preenche(int V[], int qtd);
void MMS(int V[], int qtd, int *maior, int *menor, int *soma);

int main(){

   int VET[TAM],min,max,s;

   preenche(VET,TAM);
   MMS(VET,TAM,&min,&max,&s);

   printf("Menor %d\n",min);
   printf("Maior %d\n",max);
   printf("Soma %d\n",s);
   return 0;
}

void preenche(int V[], int qtd){
  int i;
  for (i = 0; i < qtd; i++){
    printf("Numero\n");
    scanf("%d",&V[i]);
  }
}

void MMS(int V[], int qtd, int *maior, int *menor, int *soma){
  int i;
  *maior = V[0];
  *menor = V[0];
  *soma = V[0];
  for (i = 1; i < qtd; i++){
    if (V[i] < *menor){
        *menor = V[i];
    }
    if (V[i] > *maior){
        *maior = V[i];
    }
    *soma = (*soma) + V[i];
  }
}
