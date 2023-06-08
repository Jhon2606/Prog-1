#include <stdio.h>

#define D1 5
#define D2 2
#define D3 3

int main() {
    int i, j, M[D1][D2], M2[D1][D3];

    // Leitura da matriz M
    for (i = 0; i < D1; i++) {
        for (j = 0; j < D2; j++) {
            printf("Digite o elemento M[%d][%d]: ", i, j);
            scanf("%d", &M[i][j]);
        }
    }

    // Processamento da matriz M para gerar a matriz M2
    for (i = 0; i < D1; i++) {
        int maior = M[i][0];
        int menor = M[i][0];
        int soma = 0;

        for (j = 0; j < D2; j++) {
            if (M[i][j] > maior) {
                maior = M[i][j];
            }

            if (M[i][j] < menor) {
                menor = M[i][j];
            }

            soma += M[i][j];
        }

        M2[i][0] = maior;
        M2[i][1] = menor;
        M2[i][2] = soma;
    }

    // Impressão da matriz M2
    printf("Matriz M2[5][3]:\n");
    for (i = 0; i < D1; i++) {
        for (j = 0; j < D3; j++) {
            printf("%d ", M2[i][j]);
        }
        printf("\n");
    }

    return 0;
}
