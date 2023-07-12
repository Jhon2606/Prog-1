#include <stdio.h>

void mes(int numero);

int main(){

    int N;

    printf("Digite um numero para ver o mes correspondente:\n");
    scanf("%d", &N);

    mes(N);

    return 0;
}
void mes(int numero){

    if(numero > 12){
        printf("O SEU ANIMAL O ANO POR ACASO TEM %d meses??", numero);
    }
    if(numero < 1){
        printf("Entendi, entao agora voce volta no tempo ne? Doctor Who?");
    }
    if(numero == 1){
        printf("Janeiro");
    }
    if(numero == 2){
        printf("Fevereiro");
    }
    if(numero == 3){
        printf("Março");
    }
    if(numero == 4){
        printf("Abril");
    }
    if(numero == 5){
        printf("Maio");
    }
    if(numero == 6){
        printf("Junho");
    }
    if(numero == 7){
        printf("Julho");
    }
    if(numero == 8){
        printf("Agosto");
    }
    if(numero == 9){
        printf("Setembro");
    }
    if(numero == 10){
        printf("Outubro");
    }
    if(numero == 11){
        printf("Novembro");
    }
    if(numero == 1){
        printf("Dezembro");
    }
}
