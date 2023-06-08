#include <stdio.h>

int main() {
    int n, maior = 0;

    while (1) {
        printf("Digite um numero (0 para sair): ");
        scanf("%d", &n);

        if (n == 0) {
            break; // sai do loop
        }

        if (n > maior) {
            maior = n;
        printf("O maior numero digitado foi: %d\n", maior);
        }
    }

    return 0;
}
