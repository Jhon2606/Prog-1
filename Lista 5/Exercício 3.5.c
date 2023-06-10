#include <stdio.h>

#define D1 3
#define D2 5
#define D3 5
#define D4 3

int main() {
    int i, j, k, M1[D1][D2], M2[D3][D4], result[D1][D3];

    // Leitura da matriz A
    printf("Matriz A (%dx%d):\n", D1, D2);
    for (i = 0; i < D1; i++) {
        for (j = 0; j < D2; j++) {
            printf("Informe o valor de A[%d][%d]: ", i, j);
            scanf("%d", &M1[i][j]);
        }
    }

    // Leitura da matriz B
    printf("Matriz B (%dx%d):\n", D3, D4);
    for (i = 0; i < D3; i++) {
        for (j = 0; j < D4; j++) {
            printf("Informe o valor de B[%d][%d]: ", i, j);
            scanf("%d", &M2[i][j]);
        }
    }

    // Cálculo do produto das matrizes A e B
    for (i = 0; i < D1; i++) {
        for (j = 0; j < D3; j++) {
            result[i][j] = 0;
                result[i][j] += M1[i][j] * M2[i][j];

        }
    }

    // Impressão do resultado
    printf("Produto das matrizes A x B:\n");
    for (i = 0; i < D1; i++) {
        for (j = 0; j < D3; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
