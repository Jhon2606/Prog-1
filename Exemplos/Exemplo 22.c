#include <stdio.h>

int main(){

   int x, i, ehprimo;

   printf("Informe x\n");
   scanf("%d",&x);

   ehprimo = 1; //1 se eh primo 0 caso contrario
   for (i = 2; i < x; i++){
     if((x % i)== 0){
       ehprimo = 0;
     }
   }

   if (ehprimo == 1){
      printf("%d eh primo\n", x);
   }
   else{
      printf("%d NAO eh primo\n", x);
   }

   return 0;
}
