#include <stdio.h>

#define D1 3
#define D2 5
int main(){

    int i, j, M[D1][D2];

    for(i = 0; i < D1; i++){
        for(j = 0; j < D2; j++){
            printf("Informe o : M[%d][%d]\n", i, j);
            scanf("%d", &M[i][j]);
        }
    }
    for(i = 0; i < D1; i++){
        for(j = 0; j < D2; j++){
            printf("%d", M[i][j]);
        }
        printf("\n");
    }
    return 0;
}
