#include <stdio.h>
#include <stdlib.h>

void main (){

    int numero1, numero2, numero3, resultado;

    printf("Digite um numero:\n");
    scanf("%d", &numero1);
    printf("Digite outro numero:\n");
    scanf("%d", &numero2);
    printf("Digite mais um numero:\n");
    scanf("%d", &numero3);
    resultado = numero1 * numero2 * numero3;

    printf("O produto desses 3 numeros e: %d\n", resultado);

    return 0;
}
