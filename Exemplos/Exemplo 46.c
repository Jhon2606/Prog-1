4#include <stdio.h>

void imprimeNumeros(int m, int n);
void troca(int m, int n);

int main(){

    int x, y;

    printf("Informe um numero inteiro\n");
    scanf("%d",&x);
    printf("Informe um numero inteiro\n");
    scanf("%d",&y);

    imprimeNumeros(x,y);
    troca(x,y);
    imprimeNumeros(x,y);
   return 0;
}

void imprimeNumeros(int m, int n){
   printf("%d %d\n",m,n);
}

void troca(int m, int n){
    int aux;

    imprimeNumeros(m,n);
    aux = m;
    m = n;
    n = aux;
    imprimeNumeros(m,n);
}
