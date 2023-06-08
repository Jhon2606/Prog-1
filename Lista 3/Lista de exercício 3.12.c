#include <stdio.h>

int main() {
    int n, num, maior, menor;

    printf("Digite a quantidade de numeros: ");
    scanf("%d", &n);

    printf("Digite o primeiro numero: ");
    scanf("%d", &num);

    maior = num;
    menor = num;

    for (int i = 1; i < n; i++) {
        printf("Digite o proximo numero: ");
        scanf("%d", &num);

        if (num > maior) {
            maior = num;
        }
        if (num < menor) {
            menor = num;
        }
    }

    printf("Maior numero: %d\n", maior);
    printf("Menor numero: %d\n", menor);

    return 0;
}
