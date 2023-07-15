#include <stdio.h>

int dive(int *A, int *B);

int main(){

    int a, b, result;

    printf("Digite o valor a:\n");
    scanf("%d", &a);
    printf("Digite o valor de b:\n");
    scanf("%d", &b);

   result = dive(&a, &b);

    if(result == -1){
        printf("Nao se divide por 0.\n");
    }
    else{
        printf("O quociente e %d e o resto e %d", a, b);
    }

    return 0;
}
int dive(int *A, int *B){

    int c = *A, d = *B;

    if (*B == 0){
        return -1;
    }
    else{
        *A = *A / *B;
        *B = c % d;
        return 0;
    }

}
