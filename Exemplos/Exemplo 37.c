#include <stdio.h>

#define TAM 10

int main(){

   int i, j, aux, M[TAM][TAM];

   for(i = 0; i < TAM; i++){
      for(j = 0; j < TAM; j++){
         printf("Informe elemento\n");
         scanf("%d",&M[i][j]);
      }
   }

   //Letra a
   for(j = 0; j < TAM; j++){
      aux = M[1][j];
      M[1][j] = M[7][j];
      M[7][j] = aux;
   }

   //Letra b
   for(i = 0; i < TAM; i++){
      aux = M[i][3];
      M[i][3] = M[i][9];
      M[i][9] = aux;
   }

   //Letra c
   for(i = 0; i < TAM; i++){
      aux = M[i][i];
      M[i][i] = M[i][TAM-1-i];
      M[i][TAM-1-i] = aux;
   }

   //Letra d
   for(i = 0; i < TAM; i++){
      aux = M[4][i];
      M[4][i] = M[i][9];
      M[i][9] = aux;
   }

   for(i = 0; i < TAM; i++){
      for(j = 0; j < TAM; j++){
         printf("%d ", M[i][j]);
      }
      printf("\n");
   }

   return 0;
}
