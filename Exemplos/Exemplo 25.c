#include <stdio.h>

#define TAM 5

int main(){

   int vet[TAM], i;

   for(i = 0; i < TAM; i++){
     printf("informe um numero\n");
     scanf("%d",&vet[i]);
   }

   vet[2]++;
   vet[0] = vet[0]*2;
   vet[3] = 20-vet[4];

   for(i = 0; i < TAM; i++){
      printf("Elemento do vetor: %d\n", vet[i]);
   }

   return 0;
}
