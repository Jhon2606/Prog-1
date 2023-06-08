#include <stdio.h>

    int main(){

    float produto;
    float desconto;

    printf("Digite o preço do produto:\n");
    scanf("%f", &produto);

    desconto = produto*0.10;
    produto = produto - desconto;

    printf("O preco do produto com desconto e R$%.2f\n", produto);
    return 0;
}
