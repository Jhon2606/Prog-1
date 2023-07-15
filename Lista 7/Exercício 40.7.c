#include <stdio.h>

float cover(float GRAD);

int main(){

   float grad, a;

    printf("Digite os graus:\n");
    scanf("%f", &grad);

    a = cover(grad);
    printf("Sao: %.2f radianos", a);

    return 0;
}

float cover(float GRAD){

    float rad;

    rad = (GRAD / 180) * 3.14;

    return rad;
}
