#include <stdio.h>

int main(){

   float alt, peso, imc;
   int id;

   printf("Informe sua altura\n");
   scanf("%f",&alt);

   if (alt >= 1.8){
      printf("Vc eh alta\n");
      if (alt >= 2){
        printf("vc eh gigante, o time de basquete te aguarda\n");
      }
   }
   else if (alt >= 1.6){
      printf("Vc tem estatura mediana\n");
      printf("Informe seu peso\n");
      scanf("%f",&peso);
      imc = peso/(alt*alt);
      if (imc >= 25){
        printf("Vc esta com sobrepeso\n");
      }
      else{
        printf("Tudo normal com seu IMC\n");
      }
   }
   else if (alt >= 1.4){
      printf("Vc eh baixa\n");
   }
   else{
      printf("Vc eh muito baixa\n");
      printf("Informe sua idade\n");
      scanf("%d", &id);
      if (id <= 12){
        printf("Vc eh crianca\n");
      }
      else if (id <= 18){
        printf("Vc eh adolescente\n");
      }
      else{
        printf("Sua genetica nao ajuda\n");
      }
   }

   return 0;
}
