#include <stdio.h>

void primo(int q);

int main(){

    int p;

    printf("Digite um numero:\n");
    scanf("%d", &p);

    primo(p);

    return 0;
}
void primo(int q){

    int i, r;

    if(q <= 1){
        r = 0;
    }
    for(i = 2; i < q; i++){
        if(q % i == 0){

            r = 0;
        }
        else{
            r = 1;
        }
    }
    if(q == 2){
    r = 1;
        }

    if(r == 1){
        printf("O numero %d e primo.\n", q);
    }
    else{
        printf("O numero %d nao e primo.", q);
    }
}
