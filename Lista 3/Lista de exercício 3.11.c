#include <stdio.h>

int main() {
    char continuar;
    float largura, comprimento, area_total = 0;
    char nome_comodo[20];

    do {
        printf("Digite o nome do comodo: ");
        scanf("%s", nome_comodo);

        printf("Digite a largura do comodo em metros: ");
        scanf("%f", &largura);

        printf("Digite o comprimento do comodo em metros: ");
        scanf("%f", &comprimento);

        float area_comodo = largura * comprimento;
        printf("Area do comodo %s: %.2f m^2\n", nome_comodo, area_comodo);

        area_total += area_comodo;

        printf("Deseja calcular a area de outro comodo? (1-Sim, 0-Nao) ");
        scanf(" %c", &continuar);
    } while (continuar == '1');

    printf("Area total da residencia: %.2f m^2\n", area_total);

    return 0;
}
