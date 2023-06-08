#include <stdio.h>

int main(){

   int idade, nfilhos;
   float peso, imc;
   double alt;
   char sexo;
   char nome[50];

   printf("Informe seu sexo(M ou F)\n");
   scanf("%c", &sexo);
   printf("Informe sua idade\n");
   scanf("%d", &idade);
   printf("Informe o peso\n");
   scanf("%f", &peso);
   printf("Informe sua altura\n");
   scanf("%lf", &alt);
   printf("Informe seu nome\n");
   scanf("%s", nome);

   printf("O %s tem %d anos de idade\n",nome, idade);

   return 0;
}
