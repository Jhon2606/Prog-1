#include <stdio.h>

int main(){
    int numero1, numero2, x;

    printf("Digite um numero:\n");
    scanf("%d", &numero1);
    printf("Digite outro numero:\n");
    scanf("%d", &numero2);

    x = numero1 + numero2;

    if(x % 2 == 0){
        printf("A soma desses numeros e %d e ele e par\n", x);
    }
    else{
        printf("A soma dos numeros e %d e o numero e impar\n", x);
    }
}
