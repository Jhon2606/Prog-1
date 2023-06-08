#include <stdio.h>

#define NJ 3

int main(){

   char nome[20];
   float salat, salnovo, totat, totnovo, perc;
   int i;

   totat = 0;
   totnovo = 0;
   for (i = 1; i <= NJ; i++){
      printf("Informe o nome do jogador\n");
      scanf("%s", nome);
      printf("Informe o Salario Atual\n");
      scanf("%f", &salat);
      if (salat <= 1000){
        salnovo = salat * 1.2;
      }
      else if (salat <= 5000){
        salnovo = salat * 1.1;
      }
      else{
        salnovo = salat;
      }
      printf("%s ganha %.2f e vai comecar a ganhar %.2f\n",nome, salat, salnovo);
      totat = totat + salat;
      totnovo = totnovo + salnovo;
   }
   printf("Folha de Pagamentos Atual %.2f\n", totat);
   printf("Folha de Pagamentos Nova %.2f\n", totnovo);

   perc = ((totnovo-totat)/totat)*100;
   printf("O botafogo vai gastar %.2f a mais\n",perc);
   return 0;
}
