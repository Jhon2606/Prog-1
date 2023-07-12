#include <stdio.h>

void entrada(int n);
void converte(int n);
int main(){

    int N;

    entrada(N);

    return 0;
}

void entrada(int n){

    printf("Digite um numero de 1 a 50:\n");
    scanf("%d", &n);

    if (n < 1 || n > 50) {
        printf("Erro: Numero fora da faixa permitida.\n");
    } else {
        converte(n);
    }

}

void converte(int n) {
    if (n <= 0) {
        return;
    }
    if (n >= 40) {
        printf("XL");
        converte(n - 40);
    } else if (n >= 10) {
        printf("X");
        converte(n - 10);
    } else if (n >= 9) {
        printf("IX");
        converte(n - 9);
    } else if (n >= 5) {
        printf("V");
        converte(n - 5);
    } else if (n >= 4) {
        printf("IV");
        converte(n - 4);
    } else {
        printf("I");
        converte(n - 1);
    }
}
