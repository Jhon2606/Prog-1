#include <stdio.h>


int main(){

    float sal;

    printf("Digite o seu salario:\n")/
    scanf("%f", &sal);

    if(sal <= 300){
        sal = (sal * 0.50) + sal;
        printf("Seu salario agora e de: %.2f\n", sal);
    }
    else if(sal <= 500){
        sal = (sal * 0.40) + sal;
        printf("Seu salario agora e de: %.2f\n", sal);
    }
    else if(sal <= 700){
        sal = (sal * 0.30) + sal;
        printf("Seu salario agora e de: %.2f\n", sal);
    }
    else if(sal <= 800){
        sal = (sal * 0.20) + sal;
        printf("Seu salario agora e de: %.2f\n", sal);
    }
    else if(sal <= 1000){
        sal = (sal * 0.10) + sal;
        printf("Seu salario agora e de: %.2f\n", sal);
    }
    else{
        sal = (sal * 0.05) + sal;
        printf("Seu salario agora e de: %.2f\n", sal);
    }


    return 0;
}
