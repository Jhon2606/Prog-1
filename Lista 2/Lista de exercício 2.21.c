#include <stdio.h>


int main(){

    int codigo, qnt;
    float preco, preco2;

    printf("Digite o codigo do produto:\n");
    scanf("%d", &codigo);
    printf("Quantas vezes comprou este produto?\n");
    scanf("%d", &qnt);

    if(codigo <= 10){
        printf("O produto custa 10 reais\n");
        preco = 10;
    }
    else if( codigo <= 20){
        printf("O produto custa 15 reais\n");
        preco = 20;
    }
    else if(codigo <= 30){
        printf("O produto custa 20 reais\n");
        preco = 40;
    }
    else if (codigo <= 40){
        printf("O produto custa 30 reais\n");
        preco = 40;
    }
    else{
        printf("Invalido\n");
        preco = 0;
    }
    preco2 = qnt * preco;
    printf("O preco total da nota sem desconto e de: %.2f\n", preco2);

    if(preco <= 250){
        preco = preco - (preco * 0.05);
        printf("o produto com desconto passa a custar:%.2f\n",preco);
    }
    else if(preco <= 500){
        preco = preco - (preco * 0.10);
        printf("o produto com desconto passa a custar:%.2f\n",preco);
    }
    else{
        preco = preco - (preco * 0.15);
        printf("o produto com desconto passa a custar:%.2f\n",preco);
    }
    preco = qnt * preco;
    printf("O preco total da nota com desconto e de: %.2f\n", preco);

    return 0;
}
