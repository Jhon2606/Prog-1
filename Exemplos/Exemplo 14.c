#include <stdio.h>

int main(){

   int x;

   printf("Digite x\n");
   scanf("%d", &x);

   while (x <= 100){
      printf("%d\n",x);
      x++;
   }

   return 0;
}
