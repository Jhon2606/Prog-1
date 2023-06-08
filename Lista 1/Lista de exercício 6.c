#include <stdio.h>

int main(){

float peso, peso1, peso2;

printf("O seu peso e de:\n");
scanf("%f", &peso);

peso1 = peso * 0.15;
peso1 = peso + peso1;
peso2 = peso * 0.20;
peso2 = peso - peso2;

printf("Se voce engordar 15/100 tera:%.2f\n",peso1);
printf("Se voce emagrecer 20/100 tera:%.2f\n",peso2);

    return 0;
}
