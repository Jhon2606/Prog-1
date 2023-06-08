#include <stdio.h>

int main(){

   int x, y;

   printf("Digite o valor de x\n");
   scanf("%d",&x);
   printf("Digite o valor de y\n");
   scanf("%d",&y);

   x = x*2;

   if(x+y > 100){
     printf("A soma eh maior que 100\n");
   }
   else if(x+y > 50){
     printf("A soma eh maior que 50\n");
   }
   else if (x+y > 10){
     printf("A soma eh maior que 10\n");
   }
   else{
     printf("A soma nao eh maior que 10\n");
    printf("%d e %d\n", x, y);
   }

   printf("%d e %d\n", x, y);

   return 0;
}
