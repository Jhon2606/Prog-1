#include <stdio.h>

int maior(int N1, int N2);

int main(){

    int n1, n2;

    printf("Digite um valor:\n");
    scanf("%d", &n1);

    printf("Digite um valor:\n");
    scanf("%d", &n2);

    printf("O maior numero e: %d\n", maior(n1, n2));

    return 0;
}

int maior(int N1, int N2){

    if(N1 > N2){
        return N1;
    }
    else{
        return N2;
    }
}
