#include <stdio.h>

#define TAM 5;

int dobro(int d);
void imprimenum(int num);

int main(){

   int x, dx;

   printf("Digite um numero\n");
   scanf("%d",&x);
   dx = dobro(x);

   imprimenum(dx);
   imprimenum(x);
   imprimenum(dobro(x+3));

   return 0;
}

int dobro(int d){
   int dob;
   dob = 2*d;
   return dob;
}

void imprimenum(int num){
  printf("O numero eh %d\n", num);
}
