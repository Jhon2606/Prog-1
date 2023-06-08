#include <stdio.h>;

#define TAM 6

int main(){

   int i, j, M[TAM][TAM];

   for(i = 1; i <= TAM/2; i++){
       for(j = i-1; j < TAM-i+1; j++){
          M[i-1][j] = i;
          M[TAM-i][j] = i;
          M[j][i-1] = i;
          M[j][TAM-i] = i;
       }
   }

   for(i = 0; i < TAM; i++){
      for(j = 0; j < TAM; j++){
         printf("%d ", M[i][j]);
      }
      printf("\n");
   }

   return 0;
}
