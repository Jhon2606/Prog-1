#include <stdio.h>

#define TAM 3

int main(){

int S, i, j, M[TAM][TAM];

  for(i = 0; i < TAM; i++){
    for(j = 0; j < TAM; j++){
       printf("Informe o elemento [%d][%d]\n",i,j);
       scanf("%d",&M[i][j]);
    }
  }

  S = 0;
  /*for(i = 0; i < TAM; i++){
    for(j = 0; j < TAM; j++){
       if (i >= j){
          S = S + M[i][j];
       }
    }
  }*/

  for(i = 0; i < TAM; i++){
    for(j = 0; j <= i; j++){
        S = S + M[i][j];
    }
  }

  printf("A soma eh %d\n",S);

  return 0;
}
