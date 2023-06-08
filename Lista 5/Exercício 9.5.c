#include <stdio.h>

#define D1 30
#define D2 30
int main(){

    int i, j, M[D1][D2], a, p = 0;

    printf("Digite um numero A:\n");
    scanf("%d", &a);

    for(i = 0; i < D1; i++){
        for(j = 0; j < D2; j++){
            printf("Digite o elemento M[%d][%d]:", i, j);
            scanf("%d", &M[i][j]);
        }
    }
    for(i = 0; i < D1; i++){
        for(j = 0; j < D2; j++){
            if(M[i][j] == a){
                    p++;
            }
        }
    }
    printf("A matriz M tem %d elementos iguais a A.\n", p);


    return 0;
}
