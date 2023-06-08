#include <stdio.h>


int main(){

    int n1;

    printf("Digite um numero:\n");
    scanf("%d", &n1);


    if(n1 % 10 == 0 && n1 % 5 == 0 && n1 % 2 == 0 ){
        printf("O numero e divisivel por 10, por 5 e por 2.\n");
    }
    else{
        printf("O numero nao e divisivel por 10 por 5 e por 2.\n ");
    }

    return 0;
}
