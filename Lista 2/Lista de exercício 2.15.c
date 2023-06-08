#include <stdio.h>

int main(){

    float preco, preco2;
    int codigo;

    printf("Digite o preco do produto:\n");
    scanf("%f", &preco);
    printf("Digite o codigo do produto:\n");
    scanf("%d", &codigo);

    if(preco <=30){
        printf("O prdoduto de codigo %d, que custava %.2f, nao recebe desconto e continua custando %.2f.\n", codigo, preco, preco);
    }
    else if(preco <= 100) {
        preco2 = (preco * 0.10) + preco;
        printf("O prdoduto de codigo %d, que custava %.2f, com desconto de 10/100 passa a custar %.2f.\n", codigo, preco, preco2);
    }
    else{
        preco2 = (preco * 0.15) + preco;
        printf("O prdoduto de codigo %d, que custava %.2f, com desconto de 10/100 passa a custar %.2f.\n", codigo, preco, preco2);
    }

    return 0;
}
