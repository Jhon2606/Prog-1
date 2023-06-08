#include <stdio.h>

#define TAM 5

int main(){

   int i, A[TAM], B[TAM], S[TAM];

   for(i = 0; i < TAM; i++){
      printf("Informe um elemento do vetor A\n");
      scanf("%d",&A[i]);
   }

   for(i = 0; i < TAM; i++){
      printf("Informe um elemento do vetor B\n");
      scanf("%d",&B[i]);
   }

   for(i = 0; i < TAM; i++){
      S[i] = A[i]+B[i];
   }

   printf("Valores do vetor S\n");
   for(i = 0; i < TAM; i++){
       printf("%d\n", S[i]);
   }

   return 0;
}
