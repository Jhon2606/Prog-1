#include <stdio.h>


int main(){

    int i, n, maior = 0, menor = 0;
    float media = 0;

    printf("Digite 20 numeros:\n");

    for(i = 0; i < 20; i++){
        scanf("%d", &n);
    media += (float)n / 20;
        if(i == 0){
            maior = n;
            menor = n;
        }
        else{
        if(n > maior){
            maior = n;
        }
        if(n < menor){
            menor = n;
        }
    }
        }

        printf("O maior numero e o: %d\n", maior);
        printf("O menor numero e o: %d\n", menor);
        printf("A media dos numeros lidos e de:%.2f\n", media);
    return 0;

}
