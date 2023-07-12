#include <stdio.h>

int fib(int n);

int main(){

  int x;

  printf("Informe x\n");
  scanf("%d",&x);

  printf("O fib de %d eh %d\n",x,fib(x));
  return 0;
}

int fib(int n){

  if((n == 1)||(n == 2)){
     return 1;
  }
  else{
     return fib(n-1)+fib(n-2);
  }
}
