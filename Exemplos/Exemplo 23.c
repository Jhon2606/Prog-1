#include <stdio.h>

int main(){

   int num, qtd, cod;
   int qtdR, qtdC, qtdI, cont;
   float media;

   printf("Informe o numero\n");
   scanf("%d",&num);

   qtdR = 0;
   qtdC = 0;
   qtdI = 0;
   cont = 0;
   while(num != 0){
      printf("Informe a quantidade\n");
      scanf("%d",&qtd);
      printf("Informe o codigo\n");
      scanf("%d",&cod);
      if (cod == 1){
        printf("Valor a ser pago %.2f\n",qtd*0.3);
        qtdR = qtdR + qtd;
      }
      else if (cod == 2){
        printf("Valor a ser pago %.2f\n",qtd*0.5);
        qtdC = qtdC + qtd;
      }
      else{
        printf("Valor a ser pago %.2f\n",qtd*0.7);
        qtdI = qtdI + qtd;
      }
      printf("Informe o numero do proximo usuario\n");
      scanf("%d",&num);
      cont++;
   }

   printf("Residencial %d\n", qtdR);
   printf("Comercial %d\n", qtdC);
   printf("Industrial %d\n", qtdI);

   if (cont != 0){
      media = ((qtdR+qtdC+qtdI)*1.0)/cont;
   }
   else{
      media = 0;
   }
   printf("Media %.2f\n", media);

   return 0;
}
