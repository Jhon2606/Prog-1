#include <stdio.h>

int main(){
    float nota1, nota2, nota3, nota4, notaf;

    printf("Digite sua nota:\n");
    scanf("%f", &nota1);
    printf("Digite sua nota:\n");
    scanf("%f", &nota2);
    printf("Digite sua nota:\n");
    scanf("%f", &nota3);
    printf("Digite sua nota:\n");
    scanf("%f", &nota4);

    notaf = (nota1 + nota2 + nota3 + nota4)/4;

    printf("Sua media foi de %.2f\n", notaf);

    if(notaf >= 7){
        printf("Aprovado\n");
    }
    else{
        printf("Reprovado\n");
    }
    return 0;
}
