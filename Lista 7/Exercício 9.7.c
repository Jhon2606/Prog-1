#include <stdio.h>


int main(){

    int n;

    printf("Digite um valor:\n");
    scanf("%d", &n);

    SINAL(n);


    return 0;
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
