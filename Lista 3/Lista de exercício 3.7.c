#include <stdio.h>


int main(){

    int i, n, r;

    printf("Digite um numero:\n");
    scanf("%d", &n);

    r = 1;
    for (i = 2; i < n; i++){
    r = r * 2;
    }
    printf("%d\n",r);
    r = 1;
    i = 2;
    while(i < n){
        r *= 2;
        i++;
    }
    printf("%d\n", r);
    r = 1;
    i = 2;
    do{
        r *= 2;
        i++;
    }while(i < n);
    printf("%d\n", r);
    return 0;
}
