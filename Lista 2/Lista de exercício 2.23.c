#include <stdio.h>


int main(){

    float he, hf, h;

    printf("Digite suas horas extras:\n");
    scanf("%f", &he);
    printf("Digite suas horas em falta:\n");
    scanf("%f", &hf);

    h = (he) - 2/3 * ((hf));

    if(h < 600){
        printf("Voce ganhou 100 reais de gratificação\n");
    }
    else if(h <= 1200 ){
        printf("Voce ganhou 200 reais de gratificação\n");
    }
    else if(h <= 1800){
        printf("Voce ganhou 300 reais de gratificação\n");
    }
    else if(h <= 2400){
        printf("Voce ganhou 400 reais de gratificação\n");
    }
    else{
        printf("Voce ganhou 500 reais de gratificação\n");
    }

    return 0;
}
