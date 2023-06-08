#include <stdio.h>

#define D1 10
#define D2 10
int main(){

    int i, j, M[D1][D2], soma;

    for(i = 0; i < D1; i++){
        for(j = 0; j < D2; j++){
            printf("Informe o: M[%d][%d]\n", i, j);
            scanf("%d", &M[i][j]);
        }
    }
    for(i = 0; i < D1; i++){
        for(j = 0; j < D2; j++){
        if(i >= j){
            soma += M[i][j];
        }
        }
        }
        printf("%d", soma);
    return 0;
}
