#include <stdio.h>
#include <stdlib.h>

void main(){

    float numero1, numero2, resultado;

    printf("Vamos dividir um numero!\n");

    printf("Digite um numero:\n");
    scanf("%f", &numero1);
    printf("Digite outro número:\n");
    scanf("%f", &numero2);
    resultado = numero1 / numero2;

    printf("O quociente e %3.3f:", resultado);

    return 0;
}
