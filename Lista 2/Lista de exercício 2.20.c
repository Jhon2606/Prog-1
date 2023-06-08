#include <stdio.h>


int main(){

    float peso;
    int idade;


    printf("Digite a sua idade:\n");
    scanf("%d", &idade);
    printf("Digite o seu peso:\n");
    scanf("%f",&peso);

    if(idade <= 20){
        if(peso <= 60){
            printf("Voce pertence ao grupo de risco: 9\n");
        }
        else if(peso <=90){
            printf("Voce pertence ao grupo de risco: 8\n");
        }
        else{
            printf("Voce pertence ao grupo de risco: 7\n");
        }
    }
    else if (idade <= 50){
        if(peso <= 60){
            printf("Voce pertence ao grupo de risco: 6\n");
        }
        else if(peso <=90){
            printf("Voce pertence ao grupo de risco: 5\n");
        }
        else{
            printf("Voce pertence ao grupo de risco: 7\n");
    }
    }
    else{
        if(peso <= 60){
            printf("Voce pertence ao grupo de risco: 3\n");
         }
        else if(peso <=90){
            printf("Voce pertence ao grupo de risco: 2\n");
        }
        else{
            printf("Voce pertence ao grupo de risco: 1\n");
        }
    }
    return 0;
}
