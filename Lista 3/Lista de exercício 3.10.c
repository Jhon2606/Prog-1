#include <stdio.h>

int main() {
    int n, i, primo = 1;

    printf("Digite um número positivo: ");
    scanf("%d", &n);

    // Verifica se o número é primo
    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            primo = 0;
            break;
        }
    }

    // Exibe o resultado da verificação
    if (primo) {
        printf("%d é primo.\n", n);
    } else {
        printf("%d não é primo.\n", n);
    }

    return 0;
}
