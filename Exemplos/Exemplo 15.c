#include <stdio.h>

int main(){

   int x, y, op, result;

   printf("Informe X\n");
   scanf("%d",&x);
   printf("Informe Y\n");
   scanf("%d",&y);

   do{
    printf("Digite 1 para somar\n");
    printf("Digite 2 para subtrair\n");
    printf("Digite 3 para multiplicar\n");
    printf("Digite 4 para dividir\n");
    scanf("%d",&op);
   }while((op < 1) || (op > 4));

    switch (op){
    case 1:
      result = x+y;
      printf("Resultado = %d\n", result);
      break;
    case 2:
      result = y-x;
      printf("Resultado = %d\n", result);
      break;
    case 3:
      result = x-y;
      printf("Resultado = %d\n", result);
      break;
    case 4:
      result = x*y;
      printf("Resultado = %d\n", result);
      break;
    default:
      printf("Opcao Invalida\n");
  }

   //Para casa colocar o switch

   return 0;
}
