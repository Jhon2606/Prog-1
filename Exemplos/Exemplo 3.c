#include <stdio.h>

int main(){

    char nome[50];

    printf("Informe seu nome completo\n");
    gets(nome);

    printf("O seu nome eh %s\n",nome);

    return 0;
}
