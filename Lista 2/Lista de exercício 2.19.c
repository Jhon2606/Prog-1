#include <stdio.h>


int main(){

    int preco, codigo;

    printf("Digite o preco:\n");
    scanf("%d", &preco);
    printf("Digite o codigo:\n");
    scanf("%d", &codigo);

    if(codigo == 1){
        printf("Sul\n");
    }
    else if(codigo == 2){
        printf("Norte\n");
    }
    else if( codigo == 3){
        printf("Leste\n");
    }
    else if(codigo == 4){
        printf("Oeste\n");
    }
    else if(codigo <= 6){
        printf("Nordeste\n");
    }
    else if(codigo <= 9){
        printf("Sudeste\n");
    }
    else if(codigo <= 20){
        printf("Centro-Oeste\n");
    }
    else if(codigo <= 30){
        printf("Nordeste\n");
    }
    else{
        printf("Invalido\n");
    }

    return 0;
}
