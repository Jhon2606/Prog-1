#include <stdio.h>


int main(){

float sal, sal2;

printf("Digite o seu salario:\n");
scanf("%f", &sal);

if(sal <= 350){
sal = (sal * 0.15) + sal;
printf("Seu novo salario e de:%.2f\n", sal);
}
else if(sal <= 600){
sal = (sal * 0.10) + sal;
printf("Seu novo salario e de:%.2f\n", sal);
}
else if(sal <= 900){
sal = (sal * 0.5) + sal;
printf("Seu novo salario e de:%.2f\n", sal);
}
else{
    printf("Seu salario e de:%.2f\n", sal);
}
return 0;
}
