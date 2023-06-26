#include <stdio.h>

float duplicador( float a);
int main(){

    float dobro;

    printf("Digite um numero:\n");
    scanf("%f", &dobro);

    printf("O dobro do numero e: %.f\n", duplicador(dobro));

    return 0;
}
float duplicador( float a){

    float b;

    b = 2 * a;

    return b;
}
