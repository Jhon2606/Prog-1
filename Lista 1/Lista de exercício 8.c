#include <stdio.h>

int main(){
    float area;
    float baseM;
    float basem;
    float altura;

    printf("Base maior:\n");
    scanf("%f", &baseM);

    printf("Base menor:\n");
    scanf("%f", &basem);

    printf("Altura:\n");
    scanf("%f", &altura);

    area = ((baseM + basem) * altura)/2;

    printf("A AREA DO TRAPEZIO E DE:%.2f\n", area);

    return 0;
}
