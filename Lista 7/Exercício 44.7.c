#include <stdio.h>

int fib(int a);

int main(){

    int n;

    printf("Digite um numero:\n");
    scanf("%d", &n);

    printf("O fib de %d e %d\n", n, fib(n));
    return 0;
}
int fib(int a){

    int fi;

    if(a > 0 && a < 3){
        fi = 1;
    }
    if( a >= 3){
        fi = fib(a - 1)+fib(a -2);
    }

    return fi;
}
