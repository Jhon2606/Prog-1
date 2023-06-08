#include <stdio.h>


int main(){

    int i, andares, ps, pe, pne = 0, x, tp, excesso;

    printf("Digite o numero de andares do predio:\n");
    scanf("%d", &andares);
    for(i = 1; i <= andares; i++){
    printf("Digite o numero de pessoas que entraram:\n");
    scanf("%d", &pe);
    pe = pne + pe;
    printf("Digite o numero de pessoas que sairam:\n");
    scanf("%d", &ps);
    pne = pe - ps;
    if(pne <= 15){
        printf("Pode subir.\n");
    }

    else{
        pne = pne - 15;
        printf("Exesso de passageiros, tem que sair %d pessoas.\n", pne);
    }
    if (i == andares && pne > 15) {
            excesso = pne - 15;
            pne -= excesso;
            printf("Excesso de passageiros. Devem sair %d.\n", excesso);
        }
    else if(i == andares && pne <= 15){
    printf("Saiam as %d pessoas.\n", pne);

    }
    }

    return 0;
}
