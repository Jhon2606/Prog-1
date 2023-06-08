#include <stdio.h>


int main(){

    int n1, op;

    printf("Digite o valor a ser depositado:\n");
    scanf("%d", &n1);

    do{
        printf("Digite 1 para poupanca:\n");
        printf("Digite 2 para Fundos de Renda Fixa:\n");
        scanf("%d", &op);
    }while((op < 1) || (op > 99));

    switch (op){
    case 1:
        n1 = ((n1 * 0.005) + n1);
        printf("Voce vai ganhar: %d", n1);
        break;
    case 2:
         n1 = (n1 * 0.04) + n1;
        printf("Voce vai ganhar: %d", n1);
        break;
    default:
        printf("Operacao invalida.\n");
    }


    return 0;
}
