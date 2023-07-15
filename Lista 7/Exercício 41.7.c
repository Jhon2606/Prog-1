#include <stdio.h>

int convert(int F);

int main(){

    int f;

    printf("Digite a temperatura em fahrenheit:\n");
    scanf("%d", &f);

    printf("A temperatura em celcius e de: %d graus.\n", convert(f));
    return 0;
}

int convert(int F){

    int C;

    C = (F - 32) / 1.8;

    return C;
}
