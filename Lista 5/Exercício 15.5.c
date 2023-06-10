#include <stdio.h>

#define D1 4
#define D2 2
#define D3 3
int main(){

    int i, j, M[D1][D2];

    for(i = 0; i < D3; i++){
        for(j = 0; j < D2; j++){
            printf("Digite o elemento M[%d][%d]", i, j);
            scanf("%d", &M[i][j]);
        }
    }
    for(i = 0; i < D3; i++){
        for(j = 0; j < D2; j++){
        M[D3][j] = 0;
        }
    }
    for(i = 0; i < D3; i++){
        for(j = 0; j < D2; j++){
        M[D3][j] += M[i][j];
        }
    }
    for(i = 0; i < D1; i++){
        for(j = 0; j < D2; j++){
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }
    return 0;
}
