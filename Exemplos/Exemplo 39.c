#include <stdio.h>

int main(){

   int x, *xptr, y;

   printf("Informe o valor de x\n");
   scanf("%d", &x);

   xptr = &x;
   printf("Valor de x eh %d\n",x);
   printf("O endereco de x eh %p\n", &x);
   printf("Valor de xptr eh %p\n",xptr);
   printf("O endereco de xptr eh %p\n", &xptr);
   printf("Valor apontado por xptr eh %d\n",*xptr);

   x++;
   printf("\nValor de x eh %d\n",x);
   printf("O endereco de x eh %p\n", &x);
   printf("Valor de xptr eh %p\n",xptr);
   printf("O endereco de xptr eh %p\n", &xptr);
   printf("Valor apontado por xptr eh %d\n",*xptr);

   *xptr = *xptr + 3;
   printf("\nValor de x eh %d\n",x);
   printf("O endereco de x eh %p\n", &x);
   printf("Valor de xptr eh %p\n",xptr);
   printf("O endereco de xptr eh %p\n", &xptr);
   printf("Valor apontado por xptr eh %d\n",*xptr);


   y = (x * 2)+ 6;
   xptr = &y;
   printf("\nValor de x eh %d\n",x);
   printf("O endereco de x eh %p\n", &x);
   printf("Valor de y eh %d\n",y);
   printf("O endereco de y eh %p\n", &y);
   printf("Valor de xptr eh %p\n",xptr);
   printf("O endereco de xptr eh %p\n", &xptr);
   printf("Valor apontado por xptr eh %d\n",*xptr);

   return 0;
}
