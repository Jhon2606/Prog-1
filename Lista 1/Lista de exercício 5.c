#include <stdio.h>

#define salmin 1320.00
int main(){
    float vendas;
    float salariof;
    float comissao;

    printf("Valor das vendas:\n");
    scanf("%f", &vendas);

    comissao = vendas * 0.04;
    salariof = comissao + salmin;

    printf("A comissao recebida pelo funcionario foi de:%.2f\n",comissao);
    printf("O salario final do funcionario foi de:%.2f\n",salariof);

    return 0;
}
