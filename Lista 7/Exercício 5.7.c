#include <stdio.h>

float duplicador( float a);
int main(){

    float n1, n2, n3;

    printf("Digite o primeiro numero:\n");
    scanf("%f", &n1);
    printf("Digite o primeiro numero:\n");
    scanf("%f", &n2);
    printf("Digite o primeiro numero:\n");
    scanf("%f", &n3);

    printf("O dobro do primeiro e:%.f\n", duplicador(n1));
    printf("O dobro do segundo e:%.f\n", duplicador(n2));
    printf("O dobro do terceiro e:%.f\n", duplicador(n3));


    return 0;
}
float duplicador( float a){

    float b;

    b = 2 * a;

    return b;
}
