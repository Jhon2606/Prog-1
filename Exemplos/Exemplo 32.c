#include <stdio.h>

#define TAM 5

int main(){

   int i, k, p, V[TAM];

   for (i = 0; i < TAM; i++){
      printf("Informe elemento do vetor\n");
      scanf("%d",&V[i]);
   }

   printf("Qual valor deseja buscar\n");
   scanf("%d",&k);

   p = -1;

   for (i = 0; i < TAM; i++){
      if (V[i] == k){
        p = i;
      }
   }

   if (p != -1){
      printf("ACHEI na POS %d\n",p);
   }
   else{
      printf("VALOR NAO ENCONTRADO\n");
   }

   return 0;
}
