#include <stdio.h>

int div(int x, int y);

int main(){

    int X, Y;

    printf("Digite o valor de X:\n");
    scanf("%d", &X);

    printf("Digite o valor de Y:\n");
    scanf("%d", &Y);

    div(X, Y);

    if(div(X, Y) == 1){
        printf("%d e divisivel por %d", X, Y);
    }
    else{
        printf("%d nao e divisivel por %d", X, Y);
    }
    return 0;
}
int div(int x, int y){

    if(x % y == 0){
        return 1;
    }
    else{
        return 0;
    }
}
