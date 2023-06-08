#include <stdio.h>
#define ano1 2023
int main(){
    int semana, mes, dia, ano, idade;

    printf("Em que ano voce nasceu?\n");
    scanf("%d",&ano);

    idade = ano1 - ano;
    printf("Voce tem %d anos\n", idade);

    mes = idade * 12;
    printf("Voce tem %d meses de vida\n", mes);

    dia = mes * 30;
    printf("Voce tem %d dias de vida\n", dia);

    semana = dia / 7;
    printf("Voce tem %d semanas de vida\n", semana);

    return 0;
}
