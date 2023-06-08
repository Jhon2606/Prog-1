#include <stdio.h>

#define salmin 1320.00

int main(){

   float p, a, imc, sal, qtd_sm;

   printf("Peso:\n");
   scanf("%f", &p);
   printf("Altura:\n");
   scanf("%f", &a);

   imc = p/(a*a);

   printf("IMC: %.3f\n",imc);

   printf("Qual o seu salario\n");
   scanf("%f", &sal);

   qtd_sm = sal/salmin;

   printf("Vc recebe %.2f salarios minimos\n", qtd_sm);

   return 0;
}
