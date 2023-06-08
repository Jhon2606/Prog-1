#include <stdio.h>


int main(){

    int n1, P, I;

    printf("Digite um numero:\n");
    scanf("%d", &n1);

    if(n1 % 2 == 0){
        P = n1;
        printf("O numero e %d e Par.\n", P);
    }
    else{
        I = n1;
        printf("O numero e %d e Impar.\n", I);
    }

    return 0;
}
