#include <stdio.h>

int main(){

   float alt;
   int id;

   printf("Informe sua altura\n");
   scanf("%f",&alt);
   printf("Informe sua idade\n");
   scanf("%d",&id);

   if ((alt > 1.8) && (id< 18)){
      printf("Vc eh gigante\n");
   }

   if ((alt < 1.4) || (id > 80)){
      printf("Muito baixo ou muito velho\n");
   }

   if (!(id < 18)){
      printf("Vc eh adulto\n");
   }



   return 0;
}
