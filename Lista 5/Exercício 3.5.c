#include <stdio.h>

#define D1 3
#define D2 5
#define D3 5
#define D4 3

int main(){

    int i, j, M1[D1][D2], M2[D2][D3];

    for(i = 0; i < D1; i++){
        for(j = 0; j < D2; j++){
            printf("Informe o A: M1[%d][%d]\n", i, j);
            scanf("%d", &M1[i][j]);
        }
    }
    for(i = 0; i < D1; i++){
        for(j = 0; j < D2; j++){
            printf("%d\n", M1[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < D3; i++){
        for(j = 0; j < D4; j++){
            printf("Informe o A: M1[%d][%d]\n", i, j);
            scanf("%d", &M1[i][j]);
        }
    }
    for(i = 0; i < D3; i++){
        for(j = 0; j < D4; j++){
            printf("%d\n", M1[i][j]);
        }
        printf("\n");
    }

    return 0;
}
