#include <stdio.h>

#define D1 3
#define D2 3
int main(){

    int i, j, M[D1][D2], m = 0, c = 0;

    for(i = 0; i < D1; i++){
        for(j = 0; j < D2; j++){
            printf("Digite o elemento M[%d][%d]", i, j);
            scanf("%d", &M[i][j]);
        }
    }
    for(i = 0; i < D1; i++){
        for(j = 0; j < D2; j++){
                if(i == j){
                    m += M[i][j];
                    c++;
                }
        }
    }
    m = m/c;

    printf("Media: %d\n", m);


    return 0;
}
