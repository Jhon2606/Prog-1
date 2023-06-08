#include <stdio.h>

int main(){

    float peso;

    printf("O seu peso e de:\n");
    scanf("%f", &peso);

    peso = peso * 1000;

    printf("O seu peso em gramas e:%.2f\n", peso);

    return 0;
}
