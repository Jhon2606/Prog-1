#include <stdio.h>

void imprimir(int n);
void semana(int n);
int main(){

    int N;

    imprimir(N);
    return 0;
}
void imprimir(int n){

    printf("Digite um numero de 1 a 7:\n");
    scanf("%d", &n);

    semana(n);
}
void semana(int n){

    if(n < 1 || n > 7){
        printf("ERRO.");
    }
    if(n == 1){
        printf("DOM");
    }
    if(n == 2){
        printf("SEG");
    }
    if(n == 3){
        printf("TER");
    }
    if(n == 4){
        printf("QUA");
    }
    if(n == 5){
        printf("QUI");
    }
    if(n == 6){
        printf("SEX");
    }
    if(n == 7){
        printf("SAB");
    }
}
