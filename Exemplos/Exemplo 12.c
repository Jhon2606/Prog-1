#include <stdio.h>

int main(){

  int x, y, op, result;

  printf("Informe x\n");
  scanf("%d", &x);
  printf("Informe y\n");
  scanf("%d", &y);
  printf("Digite 1 se quiser somar\n");
  printf("Digite 2 se quiser subtrair x de y\n");
  printf("Digite 3 se quiser subtrair y de x\n");
  printf("Digite 4 se quiser multiplicar\n");
  scanf("%d", &op);

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

  return 0;
}
