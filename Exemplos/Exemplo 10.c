#include <stdio.h>

int main(){

   char sexo;

   printf("Sexo (M ou F)\n");
   scanf("%c", &sexo);

   switch (sexo){
    case 'M':
        printf("Masculino\n");
        break;
    case 'F':
        printf("Feminino\n");
        break;
    default:
        printf("Indefinido\n");
   }

   return 0;
}
