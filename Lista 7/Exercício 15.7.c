#include <stdio.h>

#define VET 4

void mms(int *maior, int *menor, int *soma, int S[]);

int main(){

    int ma = 0, me, s = 0, V[VET], i;

    for(i = 0; i < VET; i++) {
    printf("Digite um valor:\n");
    scanf("%d", &V[i]);

    }

    mms(&ma, &me, &s, V);

    printf("O maior e %d o menor e %d e a soma dos elementos e %d.", ma, me, s);

    return 0;
}
void mms(int *maior, int *menor, int *soma, int S[]){

    int i;
    *menor = S[0];
    for(i = 0; i < VET; i++){
        if(S[i] > *maior ){
            *maior = S[i];
        }
        if(S[i] < *menor){
            *menor = S[i];
        }
        *soma += S[i];
    }
}
