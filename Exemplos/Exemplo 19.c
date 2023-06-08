#include <stdio.h>

int main(){

   int n, i;

   printf("Qual Tabuada vc quer\n");
   scanf("%d", &n);

   for (i = 0; i <= 10; i++){
     printf("%d x %d = %d\n", n, i, n*i);
   }

   return 0;
}
