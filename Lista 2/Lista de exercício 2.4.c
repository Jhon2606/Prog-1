#include <stdio.h>

int main ()
{

    int n1, n2, op, result;

    printf("Digite o primeiro numero:\n");
    scanf("%d", &n1);
    printf("Digite o segundo numero:\n");
    scanf("%d", &n2);

    do{
        printf("Digite 1 para tirar a media:\n");
        printf("Digite 2 para tirar a diferença do maior pelo menor:\n");
        printf("Digite 3 para tirar o pruduto dos numeros digitados:\n");
        printf("Digite 4 para tirar a divisao do primeiro pelo segundo:\n");
        scanf("%d", &op);
    }while((op < 1) || (op > 99));

    switch(op){
    case 1:
        result = (n1 + n2)/ 2;
        printf("Resultado: %d\n", result);
        break;
    case 2:
            if (n1 > n2){
            result = n1 - n2;
            printf("Resultado: %d\n", result);
            }
            else {
            result = n2 - n1;
            printf("Resultado: %d\n", result);
            break;
    case 3:
            result = n1 * n2;
            printf("Resultado: %d\n", result);
             break;
    case 4:
            result = n1 / n2;
            printf("Resultado: %d\n", result);
            break;
    default:
        printf("Opcao invalida.\n");
        }

    return 0;
}
}
