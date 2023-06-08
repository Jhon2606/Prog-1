#include <stdio.h>

int main(){

   //Hoje acordei cedo
   int x; //Meu amor eu te amo seu desgraçado
   int y;
   int z;

   /* A aula de programação
   é muito legal
   eu adoro a aula de prog1 */

   printf("Informe o valor de x\n");
   scanf("%d",&x);
   printf("Informe o valor de y\n");
   scanf("%d",&y);

   z = x / y;
   printf("A divisao de x por y eh %d\n",z);

   // Para atualizar o valor da variavel x em 3 unidades
   x = x + 3;
   y = y * 2;
   x = x + (y/2);

   z = x % y;
   printf("O resto da divisao de x por y eh %d\n",z);

   x++;
   y--;

   z = x % y;
   printf("O resto da divisao de x por y eh %d\n",z);

   return 0;
}
