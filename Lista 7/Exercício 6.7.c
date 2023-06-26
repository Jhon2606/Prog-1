#include <stdio.h>

void troca(int *a, int *b);
int main (){

    int x, y;

    printf("Digite o valor de x:\n");
    scanf("%d", &x);
    printf("Digite o valor de y:\n");
    scanf("%d", &y);

    troca(&x, &y);

    return 0;
}
void troca(int *a, int *b){
    int c = 0;

    c = *a;
    *a = *b;
    *b = c;

    printf("O valor trocado x e:%d e o de y e:%d\n", *a, *b);

}
