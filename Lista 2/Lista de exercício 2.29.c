#include <stdio.h>


int main(){

    int h, h2, pag1, pag2, pag3, pag4;
    char cpf[20];

    printf("Digite o seu cpf:\n");
    scanf("%s", cpf);
    printf("Digite as horas trabalhadas:\n");
    scanf("%d", &h);


    pag1 = 50 * 10;
    if(h <= 50){
    pag4 = h * 10;
    printf("O dono do cpf %s vai ganhar %d", cpf, pag4);
    }
    else if( h > 50){
    h2 = h - 50;
    pag2 = h2 * 20;
    pag3 = pag1 + pag2;
    printf("o dono do cpf %s vai ganhar %d com salario exedente de %d.", cpf, pag3, pag2);
    }
    return 0;
}
