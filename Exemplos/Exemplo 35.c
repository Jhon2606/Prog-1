#include <stdio.h>

#define TAM 5

int main(){

   int i, j, pl, pc, D[TAM][TAM];
   char nomes[TAM][50];

  for (i = 0; i < TAM; i++){
     printf("Nome da cidade\n");
     scanf("%s", nomes[i]);
   }

   for (i = 0; i < TAM; i++){
      D[i][i] = 0;
      for(j = i+1; j < TAM; j++){
         printf("Informe a distancia entre %s e %s\n", nomes[i], nomes[j]);
         scanf("%d",&D[i][j]);
         D[j][i] = D[i][j];
      }
   }

   pl = 0;
   pc = 0;
   for (i = 0; i < TAM; i++){
      for(j = i+1; j < TAM; j++){
         if (D[i][j] < 250){
            printf("%s <--> %s\n", nomes[i], nomes[j]);
         }
         if(D[i][j] > D[pl][pc]){
            pl = i;
            pc = j;
         }
      }
   }

   printf("Maior percurso entre %s e %s\n", nomes[pl], nomes[pc]);

   return 0;
}
