#include <stdio.h>

int main(){

   int cod, qtd;
   float punit, pnota, desc;

   printf("Informe o codigo do produto\n");
   scanf("%d", &cod);
   printf("Informe a quantidade comprada\n");
   scanf("%d", &qtd);

   if (cod <= 10){
      punit = 10;
   }
   else if (cod <= 20){
      punit = 15;
   }
   else if (cod <= 30){
      punit = 20;
   }
   else{
      punit = 30;
   }

   pnota = qtd * punit;
   printf("Preco Unitario %.2f\n",punit);
   printf("Preco da nota %.2f\n",pnota);

   if (pnota < 250){
      desc = pnota * 0.05;
   }
   else if (pnota < 500){
      desc = pnota * 0.1;
   }
   else{
      desc = pnota * 0.15;
   }

   pnota = pnota - desc;

   printf("Desconto %.2f\n", desc);
   printf("Preco final da nota %.2f\n", pnota);

   return 0;
}
