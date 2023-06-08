#include <stdio.h>

int main(){
    float comprimento, largura, w, area;

    printf("Qual o comprimento do comodo?\n");
    scanf("%f", &comprimento);
    printf("Qual a largura do comodo?\n");
    scanf("%f", &largura);

    area = comprimento*largura;
    w = area*18;
    printf("A area do comodo e de: %.2f e devera ser ultilizado %.2f W",area, w);

    return 0;
}
