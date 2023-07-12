#include <stdio.h>

int pot(int base, int exp);

int main(){

  int x, y;

  printf("Informe x\n");
  scanf("%d",&x);
  printf("Informe y\n");
  scanf("%d",&y);

  printf("%d\n", pot(x,y));

  return 0;
}

int pot(int base, int exp){

   if (exp == 0){
      return 1;
   }
   else{
      return base * pot(base,exp-1);
   }

}
