#include <stdio.h>


int main(){

    float n1, n2, soma, subtracao, multiplicacao, divisao;
    int op;

    printf("Digite um valor:\n");
    scanf("%f", &n1);
    printf("Digite outro valor valor:\n");
    scanf("%f", &n2);
    do{
        printf("Digite 1 para somar:\n");
        printf("Digite 2 para subtrair:\n");
        printf("Digite 3 para multiplicar:\n");
        printf("Digite 4 para dividir:\n");
        scanf("%d", &op);
    }while((op < 1) || (op > 9999));

        switch(op){
    case 1:
        soma = n1 + n2;
        printf("A soma e de:%.2f\n", soma);
        break;
    case 2:
        subtracao = n1 - n2;
        printf("A subtracao e de:%.2f\n", subtracao);
        break;
    case 3:
        multiplicacao = n1 * n2;
        printf("A multiplicacao e de:%.2f\n", multiplicacao);
        break;
    case 4:
        divisao = n1 / n2;
        printf("A divisao e de:%.2f\n", divisao);
        break;
    default:
        printf("Invalido.\n");
        }
    return 0;
}
