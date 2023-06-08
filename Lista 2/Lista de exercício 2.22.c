#include <stdio.h>


int main(){

    float preco, imposto;
    int categoria;
    char s;

    printf("Digite a situacao[R ou N]:\n");
    scanf("%c", &s);
    printf("Digite o preco:\n");
    scanf("%f", &preco);
    printf("Digite a categoria:\n");
    scanf("%d", &categoria);


    if(preco <= 25){
            if(categoria == 1){
                preco = (preco * 0.05) + preco;
                printf("O valor aumentado e de: %.2f\n", preco);
            }
            else if(categoria == 2){
                preco = (preco * 0.08) + preco;
                printf("O valor aumentado e de: %.2f\n", preco);
            }
            else if(categoria == 3){
                preco = (preco * 0.10) + preco;
                printf("O valor aumentado e de: %.2f\n", preco);
            }
            else{
                printf("Invalido\n");
            }
    }
    else{
        if(categoria == 1){
                preco = (preco * 0.12) + preco;
                printf("O valor aumentado e de: %.2f\n", preco);
        }
        else if(categoria == 2){
                preco = (preco * 0.15) + preco;
                printf("O valor aumentado e de: %.2f\n", preco);
        }
        else if(categoria == 3){
                preco = (preco * 0.18) + preco;
                printf("O valor aumentado e de: %.2f\n", preco);
            }
        else{
            printf("Invalido\n");
        }
            }
    if(categoria == 1){
   if('R'){
        imposto = preco * 0.05;
        printf("O produto teve %.2f de imposto\n", imposto);
   }
    else if('N'){
        imposto = preco * 0.08;
        printf("O produto teve %.2f de imposto\n", imposto);
        }
    else{
        printf("Invalido\n");
    }
        }
    else if(categoria == 2){
        imposto = preco * 0.05;
        printf("O produto teve %.2f de imposto\n", imposto);
    }
    else if(categoria == 3){
        if('R'){
        imposto = preco * 0.05;
        printf("O produto teve %.2f de imposto\n", imposto);
   }
    else if('N'){
        imposto = preco * 0.08;
        printf("O produto teve %.2f de imposto\n", imposto);
        }
    else{
        printf("Invalido\n");
    }
    }
    else{
        printf("Invalido\n");
    }

    imposto = preco - imposto;
    printf("O novo preco e de:%.2f\n", imposto);

    if(preco <= 50){
        printf("Barato\n");
    }
    else if(preco <= 120){
        printf("Normal\n");
    }
    else{
        printf("Caro\n");
    }
    return 0;
}
