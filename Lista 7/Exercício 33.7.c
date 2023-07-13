#include <stdio.h>

int fat(int n);

int main(){

    int N;

    printf("Digite um numero:\n");
    scanf("%d", &N);

    fat(N);

    if(fat(N) == -1){
        printf("Nao existe fatorial para esse numero.\n");
    }
    else{
        printf("O fatorial e: %d", fat(N));
    }
    return 0;
}

int fat(int n){

    int i, fatorial = 1;

    if(n < 0){
        return -1;
    }
    else{
        for(i = 1; i <= n; i++){
            fatorial *= i;
    }
    return fatorial;
    }
}
