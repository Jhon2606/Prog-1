#include <stdio.h>

#define sal 1320.00
int main(){
    float salf, conta1, conta11, conta2, conta22;

    printf("Digite o valor da conta:\n");
    scanf("%f", &conta1);

    printf("Digite o valor da outa conta:\n");
    scanf("%f", &conta2);

    conta11 = conta1 * 0.02;
    conta1 = conta11 + conta1;
    conta22 = conta2 * 0.02;
    conta2 = conta22 +  conta2;

    salf = sal - conta1 - conta2;

    printf("O resto do salario sera de %.2f\n", salf);

    return 0;
}
