#include <stdio.h>

void imprimeNomeNvezes(char str[], int qtd);
int fatorial(int n);

int main(){

    char nome[50];
    int n;

    printf("Informe seu nome\n");
    scanf("%s", nome);
    printf("Informe um numero\n");
    scanf("%d",&n);

    imprimeNomeNvezes(nome,n);

    printf("O fatorial de %d eh %d\n",n,fatorial(n));

   return 0;
}

void imprimeNomeNvezes(char str[], int qtd){

 if (qtd > 0){
    printf("%s\n",str);
    imprimeNomeNvezes(str,qtd-1);
 }
}

int fatorial(int n){
   if (n == 0){
      return 1;
   }
   else{
     return n*fatorial(n-1);
   }
}
