#include <stdio.h>

#define D1 5
#define D2 4
int main(){

    int i, j, M1[D1][D2], M2[D2][D1];

    for(i = 0; i < D1; i++){
        for(j = 0; j < D2; j++){
            printf("Digite o elemento M1[%d][%d]:", i,j);
            scanf("%d", &M1[i][j]);
        }
    }

    for(i = 0; i < D2; i++){
        for(j = 0; j < D1; j++){
            M2[i][j] = M1[j][i];
        }
    }
    printf("Matriz transposta:\n");
    for(i = 0; i < D2; i++){
        for(j = 0; j < D1; j++){
            printf("%d ", M2[i][j]);
        }
    printf("\n");
    }
    return 0;
}
