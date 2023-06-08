#include <stdio.h>

#define D1 5
#define D2 3
int main(){

    int i, j, M[D1][D2];

    for(i = 0; i < D1; i++){
        for(j = 0; j < D2; j++){
            printf("Digite o elemento: [%d][%d]", i, j );
            scanf("%d", &M[i][j]);
        }

    }
    for(i = 0; i < D1; i++){
        for(j = 0; j < D2; j++){
                if( (i + j) % 2 == 0){
                    printf("%d ", M[i][j]);
                }
        }
    }

    return 0;
}
