#include <stdio.h>

void potencia(float a);
int main(){

    float cubo;

    printf("Digite o valor do comprimeto, largura e altura do cubo:\n");
    scanf("%f", &cubo);

    potencia(cubo);

    return 0;
}
void potencia(float a){

    float b;

        b = a * a * a;
            printf("A area do cubo e de: %.2f\n", b);
}
