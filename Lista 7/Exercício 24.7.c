    #include <stdio.h>

    #define M1 2
    #define N1 3
    #define K1 4

void matriz(int M[][N1], int M2[][K1], int M3[][K1]);

    int main(){

        int AB[M1][K1], A[M1][N1], B[N1][K1], i, j;

        for(i = 0; i < M1; i++){
            for(j = 0; j < N1; j++){
                printf("Digite o valor de A[%d][%d]\n", i, j);
                scanf("%d", &A[i][j]);
            }
        }

        for(i = 0; i < N1; i++){
            for(j = 0; j < K1; j++){
                printf("Digite o valor de B[%d][%d]\n", i, j);
                scanf("%d", &B[i][j]);
            }
        }

        matriz(A, B, AB);

        for(i = 0; i < M1; i++){
            for(j = 0; j < K1; j++){
                printf("%d ", AB[i][j]);
            }
                printf("\n");
        }

    return 0;
    }

    void matriz(int M[][N1],int M2[][K1], int M3[][K1]){

        int i, j;

        for(i = 0; i < M1; i++){
            for(j = 0; j < K1; j++){
              M3[i][j] = M[i][j] * M2[i][j];
            }
        }
    }
