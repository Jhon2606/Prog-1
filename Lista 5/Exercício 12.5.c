#include <stdio.h>

#define D1 10
#define D2 10
int main(){

    int i, j, M[D1][D2], a, b, c, d;

    for(i = 0; i < D1; i++){
        for(j = 0; j < D2; j++){
            printf("Digite o elemento M[%d][%d]:", i, j);
            scanf("%d", &M[i][j]);
        }
    }
    printf("Matriz original:\n");
    for(i = 0; i < D1; i++){
        for(j = 0; j < D2; j++){
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }
    for(i = 0; i < D1; i++){
        for(j = 0; j < D2; j++){
                a = M[1][j];
                M[1][j] = M[7][j];
                M[7][j] = a;

                b = M[i][3];
                M[i][3] = M[i][9];
                M[i][9] = b;

                c = M[i][i];
                M[i][i] = M[i][D2 - 1 - i];
                M[i][D2 - 1 - i] = c;

                d = M[4][j];
                M[4][j] = M[j][9];
                M[j][9] = d;
    }
    }
    printf("Matriz realocada:\n");
    for(i = 0; i < D1; i++){
        for(j = 0; j < D2; j++){
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }

    return 0;
}
