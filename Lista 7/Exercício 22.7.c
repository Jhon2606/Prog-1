#include <stdio.h>

#define d1 2
#define d2 2

void lerM(int V[][d2], int V1[][d2]);
void somaM(int V[][d2], int V1[][d2], int s[][d2]);
void imprimir(int s[][d2]);

int main(){

    int M[d1][d2], M1[d1][d2], S[d1][d2];

    lerM(M, M1);
    somaM(M, M1, S);
    imprimir(S);
    return 0;
}

void lerM(int V[][d2], int V1[][d2]){

    int i, j;

    for (i = 0; i < d1; i++) {
        for (j = 0; j < d2; j++) {
            printf("Digite o elemento %d,%d da primeira matriz: ", i+1, j+1);
            scanf("%d", &V[i][j]);
        }
    }

    for (i = 0; i < d1; i++) {
        for (j = 0; j < d2; j++) {
            printf("Digite o elemento %d,%d da segunda matriz: ", i+1, j+1);
            scanf("%d", &V1[i][j]);
        }
    }
}

void somaM(int V[][d2], int V1[][d2], int s[][d2]){

    int i, j;

    for(i = 0; i <= d1; i++){
        for(j = 0; j <= d2; j++){
         s[i][j] = V[i][j] + V1[i][j];
        }
    }
}

void imprimir(int s[][d2]){

    int i, j;

    for(i = 0; i < d1; i++){
        for(j = 0; j < d2; j++){
            printf("Soma:%d\n", s[i][j]);
        }
    }
}
