#include <stdio.h>

int calculo(int val, int pot);

int main() {
    int valor;
    int potencia;
    int resultado;

    printf("Digite um valor:\n");
    scanf("%d", &valor);
    printf("Digite a potencia:\n");
    scanf("%d", &potencia);

    resultado = calculo(valor, potencia);

    printf("Resultado: %d\n", resultado);

    return 0;
}

int calculo(int val, int pot) {
    int i;
    int result = 1;

    if (pot == 0) {
        result = 1;
    }
    else {
        for (i = 0; i < pot; i++) {
            result *= val;
        }
    }

    return result;
}
