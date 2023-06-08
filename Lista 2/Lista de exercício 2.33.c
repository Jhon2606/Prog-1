#include <stdio.h>


int main(){

    int N;

    printf("Digite um numero:\n");
    scanf("%d", &N);

    if(N > 100){
        printf("%d", N);
    }
    if(N <= 100){
        N = 0;
        printf("%d", N);
    }

    return 0;
}
