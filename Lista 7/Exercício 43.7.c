#include <stdio.h>


float cover(float f);

int main(){

    float feet;

    printf("Digite os pes:\n");
    scanf("%f", &feet);

    printf("Sao %.2f metros.\n", cover(feet));

    return 0;
}

float cover(float f){

    float m;

    m = f * 3.281;

    return m;
}
