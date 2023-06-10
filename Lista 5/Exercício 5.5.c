#include <stdio.h>

#define D1 2
#define D2 2
int main(){

    int i, j, M[D1][D2], x = 0, y, z;

    for(i = 0; i < D1; i++){
        for(j = 0; j < D2; j++){
            printf("Digite o elemento: [%d][%d]", i, j );
            scanf("%d", &M[i][j]);


        }
    }
    for(i = 0; i < D1; i++){
        for(j = 0; j < D2; j++){
                if(M[i][j] > x){
                    x  = M[i][j];
                    y  = i;
                    z  = j;
                }

        }

    }
    printf("O elemento e %d e sua posicao e [%d][%d].\n", x, y, z);



    return 0;
}
