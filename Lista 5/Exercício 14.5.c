#include <stdio.h>

#define D1 6
#define D2 6
int main(){

    int i, j, M[D1][D2];

    for(i = 0; i < D1; i++){
        for(j = 0; j < D2; j++){
            if((i == 2 || i == 3) && (j == 2 || j == 3)){
             M[i][j] = 3;
            }
            else if(( i >= 1 && i <= 4) && (j >= 1 && j <= 4)){
                M[i][j] = 2;
            }
            else{
                M[i][j] = 1;
            }
        }
    }
    for(i = 0; i < D1; i++){
        for(j = 0; j < D2; j++){
           printf("%d ", M[i][j]);
        }
        printf("\n");
    }


    return 0;
}
