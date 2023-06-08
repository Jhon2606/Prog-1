#include <stdio.h>

#define CAR 2

typedef struct carro{
int ano, preco;
char marca[20], mod[20], cor[20];
}Carro;
int main(){

    Carro la[CAR];
    int i;

    for(i = 0; i < CAR; i++){
        printf("Informe o modelo do carro:");
        scanf("%s", la[i].mod);
        printf("Informe a marca do carro:");
        scanf("%s", la[i].marca);
        printf("Informe a cor do carro:");
        scanf("%s", la[i].cor);
        printf("Informe o ano do carro:");
        scanf("%d", &la[i].ano);
        printf("Informe o preco do carro:");
        scanf("%d", &la[i].preco);
    }
    for(i = 0; i < CAR; i++){
        if(la[i].preco < 20000){
            printf("%s\n%s\n%s\n%d\n%d", la[i].mod, la[i].marca, la[i].cor, la[i].ano, la[i].preco);
        }
    }

    return 0;
}
