#include <stdio.h>

int main (){

    float sal, sal2;

    printf("Digite o seu salario:\n");
    scanf("%f", &sal);

    if(sal < 500){
     sal2 = (sal * 0.30) + sal;
     printf("Seu novo salario e de: %.2f\n", sal2);
    }
     else {
        printf("Voce nao ganhara aumento.\n");
     }
    return 0;
}
