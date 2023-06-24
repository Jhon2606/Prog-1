#include <stdio.h>

int soma2num (int a, int b);
void printimc(float p, float a);

int main(){

   int x, y, z;
   float p, a;

   printf("Digite o primeiro numero\n");
   scanf("%d", &x);
   printf("Digite o segundo numero\n");
   scanf("%d", &y);

   z = soma2num(x,5);
   printf("Valor de z eh %d\n", z);
   printf("Valor de x + y eh %d\n", soma2num(x,y));

   printf("Informe o peso\n");
   scanf("%f", &p);
   printf("Informe a altura\n");
   scanf("%f", &a);
   printimc(p,a);

   printf("Informe o peso\n");
   scanf("%f", &p);
   printf("Informe a altura\n");
   scanf("%f", &a);
   printimc(p,a);
   return 0;
}

int soma2num (int a, int b){
   int s;

   s = a + b;
   return s;
}

void printimc(float p, float a){
   float imc;
   imc = p/(a*a);
   printf("O imc eh %f\n", imc);
}
