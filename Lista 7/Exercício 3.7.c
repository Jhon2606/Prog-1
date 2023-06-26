#include <stdio.h>

float potencia(float a);
int main(){

    float cubo;

    printf("Digite o valor do comprimeto, largura e altura do cubo:\n");
    scanf("%f", &cubo);

    printf("A area do cubo e de: %.f\n", potencia(cubo));

    return 0;
}
float potencia(float a){

    float b;

        b = a * a * a;
    return b;
}
