#include <stdio.h>

int cap(int Num);

int main(){

    int num;

    printf("Digite um numero:\n");
    scanf("%d", &num);

    if(cap(num)){
        printf("E um numero capicua.\n");
    }
    else{
        printf("O numero nao e capicua.\n");
    }
    return 0;
}
int cap(int Num){

    int original = Num;
    int reverso = 0;

    while (Num > 0) {
        reverso = reverso * 10 + Num % 10;
        Num /= 10;
    }

    if(original == reverso){
        return 1;
    }
    else{
        return 0;
    }
}
