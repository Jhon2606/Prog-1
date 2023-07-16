#include <stdio.h>

void METADE(float N);
int main() {

    float p;

    printf("Digite um valor:\n");
    scanf("%f", &p);

    METADE(p);

    return 0;
}

void METADE(float N){

    float i;

    i = N/2;
    printf("A metade de %.f e %.2f", N, i);

}
