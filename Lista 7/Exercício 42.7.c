#include <stdio.h>

float con(int POL);

int main(){

    int pol;

    printf("Digite as polegadas:\n");
    scanf("%d", &pol);

    printf("%.2f cm\n", con(pol));
    return 0;
}
float con(int POL){

    float cm;

    cm = POL * 2.54;

    return cm;
}
