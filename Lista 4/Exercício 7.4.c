#include <stdio.h>

#define A 3
int main(){

    int vetA[A], i;

    for(i = 0; i < A; i++){
        printf("Digite um numero:\n");
        scanf("%d", &vetA[i]);

        if(vetA[i] % 2 == 0){
                vetA[i] = vetA[i] / 2;
            }

        else{
            vetA[i] = vetA[i] * 3;
        }
    }
    for(i = 0; i < A; i++){
            printf("%d\n", vetA[i]);

    }


    return 0;
}
