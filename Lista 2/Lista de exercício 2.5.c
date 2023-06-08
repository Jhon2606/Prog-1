#include <stdio.h>


int main(){

int n1, n2, op, resul;

printf("Digite um numero:\n");
scanf("%d", &n1);
printf("Digite outro numero:\n");
scanf("%d", &n2);

do{
    printf("Digite 1 para calcular a media entre os numeros:\n");
    printf("Digite 2 para calcular a diferenca do maior para o menor:\n");
    printf("Digite 3 para calcular o produto entre os numeros:\n");
    scanf("%d", &op);
    }while((op < 1) || (op > 99));

    switch (op){
    case 1:
        resul = (n1 + n2)/2;
        printf("Resultado:%d\n", resul);
        break;
    case 2:
        if(n1 > n2){
            resul = n1 - n2;
            printf("Resultado:%d\n", resul);
        }
        else{
            resul = n2 - n1;
            printf("Resultado:%d\n", resul);
        }
        break;
    case 3:
        resul = n1 * n2;
        printf("Resultado:%d\n", resul);
        break;
    default:
        printf("Invalido");

    }
return 0;
}
