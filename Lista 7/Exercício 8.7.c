#include <stdio.h>

void carac( char a[], int b, char V[]);
int main(){

    char S[20], K[20];
    int N, i;

    printf("Digite um nome:\n");
    scanf("%s", S);
    printf("Digite um numero:\n");
    scanf("%d", &N);

    carac(S, N, K);

    printf("Os %d primeiros caracteres de %s sao %s", N, S, K);

    return 0;
}
void carac( char a[], int b, char V[]){

    int i;

    for(i = 0; i < b && a[i] != '\0'; i++){
        V[i] = a[i];
        }
}
