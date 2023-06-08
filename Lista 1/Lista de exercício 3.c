#include <stdio.h>

    int main(){
    float nota1;
    float nota2;
    float notaf;

    printf("Digite sua primeira nota:\n");
    scanf("%f",&nota1);
    printf("Digite sua segunda nota:\n");
    scanf("%f",&nota2);

    nota1 = nota1*2;
    nota2 = nota2*3;
    notaf = (nota1+nota2)/5;

    printf("A media ponderada das suas notas e:%.1f", notaf);






    return 0;
}
