#include <stdio.h>

float media(float x, float y, float z);

int main(){

    float n1, n2, n3;

    printf("Digite o primeiro valor:\n");
    scanf("%f", &n1);
    printf("Digite o segundo valor:\n");
    scanf("%f", &n2);
    printf("Digite o terceiro valor:\n");
    scanf("%f", &n3);

    printf("A media e:%.2f\n", media(n1, n2, n3));


    return 0;
}

float media(float x, float y, float z){

    float med;

    med = (x + y + z)/3;

    return med;
}
