#include <stdio.h>

int main(){

   int limite, i;

   printf("Informe o limite\n");
   scanf("%d",&limite);

   for(i = 1; i <= limite; i++){
      printf("%d\n", i);
   }

   return 0;
}
