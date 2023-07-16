#include <stdio.h>

void ler(int n1);
void SINAL(int N);

int main(){

    int n;

    ler(n);

    return 0;
}
void ler(int n1){

    printf("Digite um valor:\n");
    scanf("%d", &n1);

    SINAL(n1);
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
