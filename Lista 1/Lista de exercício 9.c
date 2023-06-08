#include <stdio.h>

int main(){

    float lado, area;

    printf("Quanto mede o lado do quadrado?\n");
    scanf("%f", &lado);

    area = lado * lado;

    printf("A area do quadrado e de:%.2f\n", area);

    return 0;
}
