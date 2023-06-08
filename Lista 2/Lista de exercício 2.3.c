#include <stdio.h>

int main(){
    int n1, n2;

    printf("Numero 1:\n");
    scanf("%d", &n1);
    printf("Numero 2:\n");
    scanf("%d", &n2);

    if(n1>n2){
        printf("%d\n", n2);
    }
    else{
        printf("%d,\n", n1);
    }

    return 0;
}
