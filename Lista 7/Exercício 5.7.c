#include <stdio.h>

void ler(int *a, int *b, int *c);
float duplicador( float a);

int main(){

    float n1, n2, n3;

    ler(&n1, &n2, &n3);

    printf("O dobro do primeiro e:%.f\n", duplicador(n1));
    printf("O dobro do segundo e:%.f\n", duplicador(n2));
    printf("O dobro do terceiro e:%.f\n", duplicador(n3));

    return 0;
}
void ler(int *a, int *b, int *c){

    printf("Digite o primeiro numero:\n");
    scanf("%f", &*a);
    printf("Digite o primeiro numero:\n");
    scanf("%f", &*b);
    printf("Digite o primeiro numero:\n");
    scanf("%f", &*c);
}

float duplicador( float a){

    float b;

    b = 2 * a;

    return b;
}
