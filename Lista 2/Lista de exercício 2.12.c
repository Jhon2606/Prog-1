#include <stdio.h>


int main(){

    float preco;

    printf("Digite o preco do produto:\n");
    scanf("%f", &preco);

    if(preco <= 50){
        preco = (preco * 0.05) + preco;
        printf("O produto custa:%.2f\n", preco);
    }
    else if(preco <= 100){
        preco = (preco * 0.10) + preco;
        printf("O produto custa:%.2f\n", preco);
    }
    else{
        preco = (preco * 0.15) + preco;
        printf("O produto custa:%.2f\n", preco);
    }
    if(preco <= 80){
        printf("O produto e barato.");
        }
        else if (preco <= 120){
        printf("O produto tem o preco normal.");
        }
        else if (preco <= 200){
        printf("O produto e caro");
        }
        else{
        printf("O produto e muito caro");
        }

    return 0;
    }
