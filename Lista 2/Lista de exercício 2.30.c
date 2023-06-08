#include <stdio.h>


int main(){

    int n1, n11, n2, n22, n3, n33, n4, n44;

    printf("Digite um numero:\n");
    scanf("%d", &n1);
    printf("Digite outro numero:\n");
    scanf("%d", &n2);
    printf("Digite outro numero:\n");
    scanf("%d", &n3);
    printf("Digite outro numero:\n");
    scanf("%d", &n4);

    n11 = n1*n1;
    n22 = n2*n2;
    n33 = n3*n3;
    n44 = n4*n4;

    if(n33 >= 1000){
        printf("O valor do quadrado de n3 e de:%d\n", n33);
    }
    else{
        printf("O quadrado de %d e %d\n", n1, n11);
        printf("O quadrado de %d e %d\n", n2, n22);
        printf("O quadrado de %d e %d\n", n3, n33);
        printf("O quadrado de %d e %d\n", n4, n44);
    }
    return 0;
}
