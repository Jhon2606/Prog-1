#include <stdio.h>


int main(){

    float saldo, saldo2;

    printf("Digite seu saldo medio:\n");
    scanf("%f", &saldo);

    if (saldo > 400 ){
    saldo2 = saldo * 0.30;
    printf("Seu saldo medio de %.2f lhe rendeu %.2f de credito.\n", saldo, saldo2);
    }
    else if (saldo > 300){
    saldo2 = saldo * 0.25;
    printf("Seu saldo medio de %.2f lhe rendeu %.2f de credito.\n", saldo, saldo2);
    }
    else if(saldo > 200){
    saldo2 = saldo * 0.20;
    printf("Seu saldo medio de %.2f lhe rendeu %.2f de credito.\n", saldo, saldo2);
    }
    else{
    saldo2 = saldo * 0.10;
    printf("Seu saldo medio de %.2f lhe rendeu %.2f de credito.\n", saldo, saldo2);
    }


    return 0;
}
