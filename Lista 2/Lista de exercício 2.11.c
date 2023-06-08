#include <stdio.h>


int main(){

float sal, sal2;

printf("Digite o seu salario:\n");
scanf("%f", &sal);

if(sal <= 350){
sal = (((sal * 0.07) + sal) + 100);
printf("O valor a receber e de %.2f\n", sal);
}
else if(sal <= 600){
sal = ((sal * 0.07) + sal) + 75;
printf("O valor a receber e de: %.2f\n", sal);
}
else if(sal <= 900){
sal = ((sal * 0.07) + sal) + 50;
printf("O valor a receber e de: %.2f\n");
}
else{
    sal = ((sal * 0.07) + sal) + 35;
printf("O valor a receber e de: %.2f\n");
}
    return 0;
}
