#include <stdio.h>

#define salmin 1320.00

int main(){
    float salario;
    float salariof;

    printf("Quanto voce ganha?\n");
    scanf("%f", &salario);

    salariof = salario / salmin;

    printf("Voce ganha %.2f salarios minimos.\n", salariof);

    return 0;
}
