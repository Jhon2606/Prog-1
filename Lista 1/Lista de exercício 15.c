#include <stdio.h>


int main(){
    float c, a, v, r;

    printf("Qual o raio do circulo?\n");
    scanf("%f", &r);

    c = 2*3.14*r;
    printf("O comprimento da esfera e de:%.2f\n", c);

    a = 3.14*(r*r);
    printf("A area da esfera e de:%.2f\n", a);

    v = (4*3.14*(r*r*r))/3;
    printf("O volume da esfera e de:%.2f\n", v);

    return 0;
}
