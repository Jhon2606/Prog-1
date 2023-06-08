#include <stdio.h>

#define D1 6
#define D2 6
#define TAM 36
int main(){

    int i, j, M[D1][D2], a, vet[TAM], k = 0;

    for(i = 0; i < D1; i++){
        for(j = 0; j < D2; j++){
            printf("Digite o elemento M[%d][%d]:", i, j);
            scanf("%d", &M[i][j]);
        }
    }

    printf("Digite o valor A:");
    scanf("%d", &a);

    for(i = 0; i < D1; i++){
        for(j = 0; j < D2; j++){
            vet[k] = a * M[i][j];
            k++;
        }
    }
    for( i = 0; i < TAM; i++){
        printf("%d\n", vet[i]);
    }
    return 0;
}
