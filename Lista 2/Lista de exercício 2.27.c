#include <stdio.h>


int main(){

    float peso, altura, massa;

    printf("Digite seu peso:\n");
    scanf("%f", &peso);
    printf("Digite sua altura:\n");
    scanf("%f", &altura);

    massa = peso / (altura * altura);

    if(massa < 20){
        printf("Voce esta abaixo do peso ideal.\n");
    }
    else if(massa < 25){
        printf("Parabens! voce esta em seu peso normal!\n");
    }
    else if(massa < 30){
        printf("Voce esta acima de seu peso (sobrepeso).\n");
    }
    else if(massa < 35){
        printf("Obesidade moderada (grau I).\n");
    }
    else if(massa < 40){
        printf("Obesidade severa (grau II).\n");
    }
    else{
        printf("Obesidade mórbida (grau III).\n");
    }
    return 0;
}
