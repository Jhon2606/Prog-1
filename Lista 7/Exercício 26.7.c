#include <stdio.h>

int recebe(int *n);
void converte(int n);

int main(){

    int N;

    recebe(&N);
    converte(N);

    return 0;
}
int recebe(int *n){

    printf("Digite um numero de 0 a 10:\n");
    scanf("%d", &*n);

    return *n;
}
void converte(int n){

    if(n < 0 || n > 10){
        printf("Ate onde eu sei %d nao ta entre 0 e 10.\n", n);
    }
    if(n == 1){
        printf("Um");
    }
    if(n == 2){
        printf("Dois");
    }
    if(n == 3){
        printf("Três");
    }
    if(n == 4){
        printf("Quatro");
    }
    if(n == 5){
        printf("Cinco");
    }
    if(n == 6){
        printf("Seis");
    }
    if(n == 7){
        printf("Sete");
    }
    if(n == 8){
        printf("Oito");
    }
    if(n == 9){
        printf("Nove");
    }
    if(n == 10){
        printf("Dez");
    }
}
