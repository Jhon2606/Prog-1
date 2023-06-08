#include <stdio.h>

int main(){

  int x, y;

  printf("Informe x\n");
  scanf("%d", &x);
  printf("Informe y\n");
  scanf("%d", &y);

  switch (x+y){
    case x > 2:
      printf("A soma eh 10\n");
      break;
    case 15:
      printf("A soma eh 15\n");
      break;
    case 20:
      printf("A soma eh 20\n");
      break;
    default:
      printf("A soma nao eh nem 10 nem 15 e nem 20\n");
  }

  return 0;
}
