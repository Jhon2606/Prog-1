#include <stdio.h>

int main(){

   int x, y, op;

   printf("Informe X\n");
   scanf("%d",&x);
   printf("Informe Y\n");
   scanf("%d",&y);

   op = 0;
   while((op < 1) || (op > 4)){
    printf("Digite 1 para somar\n");
    printf("Digite 2 para subtrair\n");
    printf("Digite 3 para multiplicar\n");
    printf("Digite 4 para dividir\n");
    scanf("%d",&op);
   }

   //Para casa colocar o switch

   return 0;
}
