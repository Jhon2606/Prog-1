#include <stdio.h>

#define TAM 5

int main(){

   int V[TAM], i, j, aux;

   for(i = 0; i < TAM; i++){
      printf("Informe o elemento do vetor\n");
      scanf("%d", &V[i]);
   }

   printf("VETOR DESORDENADO\n");
   for(i = 0; i < TAM; i++){
      printf("%d ", V[i]);
   }
   printf("\n");

   //Método da Bolha
   for(i = 0; i < TAM-1; i++){
     for(j = i+1; j < TAM; j++){
        if(V[j] < V[i]){
          aux = V[j];
          V[j] = V[i];
          V[i] = aux;
        }
     }
   }

   printf("VETOR ORDENADO\n");
   for(i = 0; i < TAM; i++){
      printf("%d ", V[i]);
   }
   printf("\n");

   return 0;
}
