#include <stdio.h>

int main() {
    int cod;
    float custt1 = 0, custt2 = 0, custt3 = 0, med = 0, kwh, numero;

    do {
        printf("Digite o numero do consumidor:\n");
        scanf("%f", &numero);
        printf("Digite os Kwh consumidos no mes:\n");
        scanf("%f", &kwh);
        printf("Digite o codigo do consumidor:\n");
        scanf("%d", &cod);

        switch(cod) {
            case 1:
                custt1 += kwh * 0.3;
                printf("O custo total do consumidor %.0f residencial foi de R$ %.2f\n", numero, custt1);
                break;
            case 2:
                custt2 += kwh * 0.5;
                printf("O custo total do consumidor %.0f comercial foi de R$ %.2f\n", numero, custt2);
                break;
            case 3:
                custt3 += kwh * 0.7;
                printf("O custo total do consumidor %.0f industrial foi de R$ %.2f\n", numero, custt3);
                break;
            case 0:
                // Ao encontrar o código 0, encerra o loop do-while
                break;
            default:
                printf("Opcao invalida.\n");
        }

    } while(cod != 0);

    printf("O custo total do consumidor residencial foi de R$ %.2f\n", custt1);
    printf("O custo total do consumidor comercial foi de R$ %.2f\n", custt2);
    printf("O custo total do consumidor industrial foi de R$ %.2f\n", custt3);

    // Calcula a média de consumo geral
    med = (custt1 + custt2 + custt3) / 3;
    printf("A media do consumo geral e de: R$ %.2f\n", med);
return 0;
}
