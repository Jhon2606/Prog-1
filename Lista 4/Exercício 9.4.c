#include <stdio.h>

#define TAM 1
int main(){

    int i, p, q, r;
    float vet[TAM], vet2[TAM], vet3[TAM];

    p = 0;
    q = 0;
    r = 0;
    for(i = 0; i < TAM; i++){
        printf("Digite o preco de compra:\n");
        scanf("%f", &vet[i]);
        printf("Digite o preco de venda:\n");
        scanf("%f", &vet2[i]);
    vet3[i] = ((vet[i] - vet2[i]) / vet[i]) * 100;

    if(vet3[i] < 10){
        p++;
    }
    else if(vet3[i] >= 10 && vet3[i] <= 20){
        q++;
    }
    else{
        r++;
    }
    }
    printf("%d mercadorias menos de 10 de lucro, %d mercadorias tiveram entre 10 e 20 e %d mercadorias tiveram mais de 20 de lucro", p, q, r);

    return 0;
}
