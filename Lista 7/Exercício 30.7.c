#include <stdio.h>

int reg(int n);

int main(){

    int N;

    printf("Digite um numero:\n");
    scanf("%d", &N);

    reg(N);

    if(reg(N) == 1){
        printf("E um numero regular.\n");
    }
    else{
        printf("Nao e um numero regular.\n");
    }
    return 0;
}

int reg(int n){

    if(n % 2 != 0 && n % 3 != 0 && n % 5 != 0){
        return 0;
    }
    if(n % 2 == 0){
        n = n / 2;
    }
    if(n % 3 == 0){
        n = n / 3;
    }
    if(n % 5 == 0){
        n = n / 5;
    }
    return n;
}
