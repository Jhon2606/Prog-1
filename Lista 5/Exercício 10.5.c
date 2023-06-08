#include <stdio.h>

#define D1 5
#define D2 5
int main(){

    int i, j, M[D1][D2], s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;

    for(i = 0; i < D1; i++){
        for(j = 0; j < D2; j++){
            printf("Digite o elemento M[%d][%d]", i, j);
            scanf("%d", &M[i][j]);
        }
    }
    for(i = 0; i < D1; i++){
        for(j = 0; j < D2; j++){
            if(j == 2){
                s2 += M[i][j];
            }
            if( i == 4){
                s1 += M[i][j];
            }
            if(i == j){
                s3 += M[i][j];
            }
          if( i + j == 4){
            s4 += M[i][j];
          }
           s5 += M[i][j];
        }
    }
    printf("A soma da linha 4 e: %d\n", s1);
    printf("A soma da coluna 2 e: %d\n", s2);
    printf("A soma da diagonal principal e: %d\n", s3);
    printf("A soma da diagonal secundaria: %d\n", s4);
    printf("A soma de todos os elementos do vetor e: %d\n", s5);


    return 0;
}
