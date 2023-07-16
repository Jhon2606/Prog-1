#include <stdio.h>

void SINAL(int N);

int main(){

    int n;

    printf("Digite um numero:\n");
    scanf("%d", &n);

    SINAL(n);
}
void SINAL(int N){

    if( N < 0){
        printf("NEGATIVO\n");
    }
    else if(N == 0){
        printf("ZERO\n");
    }
    else{
        printf("POSITIVO\n");
    }
}
