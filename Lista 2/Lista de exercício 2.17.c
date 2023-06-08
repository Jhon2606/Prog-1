#include <stdio.h>


int main(){

    int idade;

    printf("Digite a sua idade:\n");
    scanf("%d", &idade);

    if(idade > 17){
        printf("Voce e maior de idade.\n");
    }
    else{
        printf("Voce e menor de idade.\n");
    }


    return 0;
}
