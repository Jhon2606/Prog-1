#include <stdio.h>

#define TAM 5

int main(){

   int i, aux, V[TAM];


   for (i = 0; i < TAM; i++){
     printf("Informe elemento do vetor\n");
     scanf("%d",&V[i]);
   }

   for (i = 0; i < TAM; i++){
     printf("%d ",V[i]);
   }
   printf("\n");

   for (i = 0; i < TAM/2; i++){
     aux = V[i];
     V[i] = V[TAM-1-i];
     V[TAM-1-i] = aux;
   }

   for (i = 0; i < TAM; i++){
     printf("%d ",V[i]);
   }
   printf("\n");

   return 0;
}
