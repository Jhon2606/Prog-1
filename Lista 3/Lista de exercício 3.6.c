#include <stdio.h>


int main(){

    int i, n;
    unsigned long long fatorial = 1;

    printf("Digite um numero:\n");
    scanf("%d", &n);

    if( n < 0){
        printf("Nao existe fatorial de numero negativo.\n");
        return 1;
    }
    for(i = 1; i <= n; i++){
        fatorial *= i;
    }
    printf("O fatorial do numero %d e %llu.\n", n, fatorial);

    while (i <= n) {
        fatorial *= i;
        i++;
    }

    printf("O fatorial de %d e %llu.\n", n, fatorial);
    i = 1;
    fatorial = 1;
    do{
        fatorial *= i;
        i++;
    }while(i <= n);

    printf("O fatorial de %d e %llu.\n", n, fatorial);

    return 0;
}
