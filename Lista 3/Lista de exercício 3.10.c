#include <stdio.h>

int main() {
    int n, i, primo = 1;

    printf("Digite um n�mero positivo: ");
    scanf("%d", &n);

    // Verifica se o n�mero � primo
    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            primo = 0;
            break;
        }
    }

    // Exibe o resultado da verifica��o
    if (primo) {
        printf("%d � primo.\n", n);
    } else {
        printf("%d n�o � primo.\n", n);
    }

    return 0;
}
