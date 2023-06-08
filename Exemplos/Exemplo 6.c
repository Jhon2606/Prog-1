#include <stdio.h>

#define anoatual 2023
#define pi 3.14
#define salmin 1320.00

int main(){

   char nome[30];
   int dia, mes, ano, idade;

   printf("Nome:\n");
   scanf("%s", nome);
   printf("Informe data de nascimento (dd/mm/yyyy)\n");
   scanf("%d/%d/%d",&dia,&mes,&ano);

   printf("O %s nasceu no dia %d do mes %d no ano %d\n",nome,dia,mes,ano);

   idade = anoatual-ano;

   printf("O %s tem %d anos de idade\n", nome, idade);

   return 0;
}
