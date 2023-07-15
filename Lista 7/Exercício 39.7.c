#include <stdio.h>
#define TAM 5

void maioresint (int V1[], int tam, int *SEG, int *QUAR);

int main(){

    int V[TAM], i,seg, quar;

    for(i = 0; i < TAM; i++){
        printf("Digite um valor:\n");
        scanf("%d", &V[i]);
    }

    maiores(V, TAM, &seg, &quar);

    printf("O segundo maior valor e %d e o quarto e %d", seg, quar);

    return 0;
}
void maiores(int V1[], int tam, int *SEG, int *QUAR){

    int maior = V1[0];
    int segundo = V1[0];
    int terceiro = V1[0];
    int quarto = V1[0];

    for (int i = 1; i < tam; i++) {
        if (V1[i] > maior) {
            quarto = terceiro;
            terceiro = segundo;
            segundo = maior;
            maior = V1[i];
        } else if (V1[i] > segundo) {
            quarto = terceiro;
            terceiro = segundo;
            segundo = V1[i];
        } else if (V1[i] > terceiro) {
            quarto = terceiro;
            terceiro = V1[i];
        } else if (V1[i] > quarto) {
            quarto = V1[i];
        }
    }

    *SEG = segundo;
    *QUAR = quarto;
}
