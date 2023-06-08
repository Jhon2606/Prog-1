#include <stdio.h>

int main() {
    float preco_arroba, peso, peso_total = 0.0, preco_total = 0.0;
    int continuar = 1, qtd_arrobas;

    printf("Digite o preco da arroba: ");
    scanf("%f", &preco_arroba);

    while (continuar != 0) {
        printf("Digite o peso do bovino (ou 0 para encerrar): ");
        scanf("%f", &peso);

        if (peso != 0) {
            peso_total += peso;
        } else {
            continuar = 0;
        }
    }

    preco_total = (peso_total / 2) * preco_arroba;
    qtd_arrobas = (peso_total / 15);

    printf("Peso total acumulado: %.2f kg\n", peso_total);
    printf("Preco total a pagar: R$ %.2f\n", preco_total);
    printf("Quantidade de arrobas: %d\n", qtd_arrobas);

    return 0;
}
