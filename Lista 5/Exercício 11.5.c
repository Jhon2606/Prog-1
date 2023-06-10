#include <stdio.h>

#define D1 2
#define D2 5
int main(){

    int i, j, M[D1][D2], e, k, l, c;

    for(i = 0; i < D1; i++){
        for(j = 0; j < D2; j++){
            printf("Digite o elemento M[%d][%d]:", i, j);
            scanf("%d", &M[i][j]);
        }
    }
    for(i = 0; i < D1; i++){
        for(j = 0; j < D2; j++){
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }
    for(i = 0; i < D1; i++){
        for(j = 0; j < D2; j++){
            e = M[i][j];
            c = 0;

     for(k = 0; k < D1; k++){
        for(l = 0; l < D2; l++){
            if(M[k][l] == e){
                c++;
            }
        }
     }
         if( c > 1){
            printf("O elemento %d aparece %d vezes em M.\n", e, c);


            }
         }
        }



    return 0;
}
