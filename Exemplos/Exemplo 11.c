#include <stdio.h>

int main(){

   int x;

   printf("Digite x\n");
   scanf("%d", &x);

   while (x > 10){
      printf("O valor de x eh maior que 10\n");
      printf("Digite um novo valor de x\n");
      scanf("%d", &x);
   }

   return 0;
}
