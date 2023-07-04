#include <stdio.h>

int dobro(int num);
void imprimeNvezes(char name[], int qtd);
void aumentaUm(int num);
void aumentaUmRef(int *num);

int main(){

   int N, dob;
   char nome[50];

   printf("Digite seu nome\n");
   scanf("%s", nome);
   printf("Informe um numero inteiro\n");
   scanf("%d", &N);

   dob = dobro(N);
   printf("O dobro eh %d\n",dob);

   imprimeNvezes(nome,N);

   printf("Valor de N eh %d\n",N);
   aumentaUm(N);
   printf("Valor de N eh %d\n",N);
   aumentaUmRef(&N);
   printf("Valor de N eh %d\n",N);

   return 0;
}

int dobro(int num){
   int d;
   d = 2*num;
   return d;
}

void imprimeNvezes(char name[], int qtd){
  int i;
  for(i = 1; i <= qtd; i++){
    printf("%s\n", name);
  }
}

void aumentaUm(int num){
   num++;
}

void aumentaUmRef(int *num){
   (*num)++;
}

