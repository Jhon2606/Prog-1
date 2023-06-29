#include <stdio.h>

void SINAL(int N){

    if( N < 0){
        printf("NEGATIVO\n");
    }
    else if(N == 0){
        printf("ZERO\n");
    }
    else{
        printf("POSITIVO\n");
    }
}
