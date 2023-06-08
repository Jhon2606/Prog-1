#include <stdio.h>

int main() {
    int num_carteira, num_multas, maior_num_multas = 0;
    float valor_multa, divida_motorista, total_arrecadado = 0.0;

    while (1) {
        printf("Digite o numero da carteira de motorista (ou 0 para encerrar): ");
        scanf("%d", &num_carteira);

        if (num_carteira == 0) {
            break;
        }

        printf("Digite o numero de multas: ");
        scanf("%d", &num_multas);

        printf("Digite o valor de cada multa: ");
        scanf("%f", &valor_multa);

        divida_motorista = num_multas * valor_multa;
        total_arrecadado += divida_motorista;

        printf("O valor da divida do motorista %d eh: R$ %.2f\n", num_carteira, divida_motorista);

        if (num_multas > maior_num_multas) {
            maior_num_multas = num_multas;
        }
    }

    printf("O total arrecadado pelo DETRAN foi de: R$ %.2f\n", total_arrecadado);
    printf("O motorista com maior numero de multas teve %d multas.\n", maior_num_multas);

    return 0;
}
