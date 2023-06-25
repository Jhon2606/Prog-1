#include <stdio.h>

int duplicador( float a);
int main(){

    float dobro;

    printf("Digite um numero:\n");
    scanf("%f", &dobro);

    printf("O dobro do numero e: %d\n", duplicador(dobro));

    return 0;
}
int duplicador( float a){

    float b;

    b = 2 * a;

    return b;
}
