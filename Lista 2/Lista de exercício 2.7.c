#include <stdio.h>

int main(){

    float sal, sal2;

    printf("Digite seu salario:\n");
    scanf("%f", &sal);

    if(sal <= 300){
        sal2 = (sal * 0.35) + sal;
        printf("Seu novo salario e de: %.2f\n", sal2);
    }
    else{
        sal2 = (sal * 0.15) + sal;
        printf("Seu novo salario e de: %.2f\n", sal2);
    }
    return 0;
}
