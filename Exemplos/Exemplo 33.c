#include <stdio.h>

#define D1 5
#define D2 4
#define D3 3

int main(){

   int i, j, BigM[D1][D2], R[D1][D3];
   int menor, maior, S;

   for (i = 0; i < D1; i++){
      for (j = 0; j < D2; j++){
        printf("Informe elemento da matriz\n");
        scanf("%d",&BigM[i][j]);
      }
   }

   for (i = 0; i < D1; i++){
      menor = BigM[i][0];
      maior = BigM[i][0];
      S = BigM[i][0];

      for(j = 1; j < D2; j++){
        if (BigM[i][j] > maior){
          maior = BigM[i][j];
        }
        if (BigM[i][j] < menor){
          menor = BigM[i][j];
        }
        S = S + BigM[i][j];
      }

      R[i][0] = maior;
      R[i][1] = menor;
      R[i][2] = S;
   }

   for(i = 0; i < D1; i++){
      for (j = 0; j < D3; j++){
         printf("%d ", R[i][j]);
      }
      printf("\n");
   }

   return 0;
}
