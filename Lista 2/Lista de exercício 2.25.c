#include <stdio.h>


int main(){

    char nome[20], sexo;
    int idade;

    printf("Digite seu sexo[M ou F]:\n");
    scanf("%c", &sexo);
    printf("Digite seu nome:\n");
    scanf("%s", nome);
    printf("Digite sua idade:\n");
    scanf("%d", &idade);

    if(idade < 18){
        printf("Menor\n");
    }
    else if(idade > 60 && sexo == 'F'){
            printf("Aposentada\n");
    }
    else if( idade > 65){
        switch(sexo){
        case 'M':
            printf("Aposentado\n");
            break;
    }
    }

    return 0;
}
