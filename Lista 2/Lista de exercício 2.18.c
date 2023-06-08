#include <stdio.h>


int main(){

    float altura, peso;
    char sexo;

    printf("Digite seu sexo[M ou F]:\n");
    scanf("%c", &sexo);
    printf("Digite sua altura:\n");
    scanf("%f", &altura);
    printf("Digite seu peso:\n");
    scanf("%f", &peso);

    switch(sexo){
    case 'M' :
        peso = (72.7 * altura) - 58;
        printf("Seu peso ideal e %.2f\n", peso);
        break;
    case 'F' :
        peso = (62.1 * altura) - 44.7;
        printf("Seu peso ideal e %.2f\n", peso);
        break;
    default:
        printf("Opcao invalida\n");
    }



    return 0;
}
