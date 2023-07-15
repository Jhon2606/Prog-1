#include <stdio.h>

int calc(int n, int p);
int fat(int n);

int main(){

    int N, P, result;

    printf("Digite o numero de elentos:\n");
    scanf("%d", &N);
    printf("Digite o tamanho:\n");
    scanf("%d", &P);

    result = calc(N, P);

    if(result == -1){
        printf("ERRO.\n");
    }
    else{
        printf("O numero n de arranjos de pa p e de: %d\n", result);
    }
    return 0;
}

int fat(int n){

    if(n == 0){
       return 1;
    }
    else{
    return n * fat(n-1);
    }
}

int calc(int n, int p){

    int B;
    if(n < 0 || p < 0){
        return -1;
    }
    else{
    p = n - p;
    n = fat(n);
    p = fat(p);
    B = n / p;
    }
    return B;
}
