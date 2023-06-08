#include <stdio.h>


int main(){

    float custo, custo2, custo3, custo4;

    printf("Digite o custo de fabricacao do carro:\n");
    scanf("%f", &custo);

    if(custo <= 12000){
        custo = (custo * 0.05) + custo;
        printf("Seu carro custa %.2f\n", custo);
    }
    else if (custo <= 25000){
        custo2 = (custo * 0.10) + custo;
        custo3 = (custo * 0.15) + custo;
        custo4 = custo2 + custo3;
        printf("Seu carro custa %.2f\n", custo4);
    }
    else{
        custo2 = (custo * 0.15) + custo;
        custo3 = (custo * 0.20) + custo;
        custo4 = custo2 + custo3;
        printf("Seu carro custa %.2f\n", custo4);
    }

    return 0;
}
