#include <stdio.h>

void returnnome(char a[]);

int main(){

char nome[20];

printf("Digite seu nome:\n");
scanf("%s", nome);

returnnome(nome);

return 0;
}
void returnnome(char a[]){

printf("Seu nome e:%s\n", a);
}
