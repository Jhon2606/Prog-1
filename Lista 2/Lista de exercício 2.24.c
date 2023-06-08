#include <stdio.h>


int main(){

    int n1, n2, n3;

    printf("Digite o primeiro numero:\n");
    scanf("%d", &n1);
    printf("Digite o segundo numero:\n");
    scanf("%d", &n2);
    printf("Digite o terceiro numero:\n");
    scanf("%d", &n3);

    if((n1 + n2) > n3){
        printf("Pode ser um triangulo\n");
    }
    else if((n1 + n3) > n2){
        printf("Pode ser um triangulo\n");
    }
    else if((n2 + n3) > n1){
        printf("Pode ser um triangulo\n");
    }
    else{
        printf("Nao pode ser um triangulo\n");
    }

    return 0;
}
