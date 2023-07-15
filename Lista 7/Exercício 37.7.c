#include <stdio.h>

int dive(int N1, int N2);

int main(){

    int n1, n2, count;

    printf("Digite o dividendo:\n");
    scanf("%d", &n1);

    printf("Digite o divisor:\n");
    scanf("%d", &n2);

    count = dive(n1, n2);

    if(count == -1){
        printf("Nao se divide por 0.\n");
    }
    else{
    printf("%d e divisivel por %d %d vezes.\n", n1, n2, count);
    }

    return 0;
}

int dive(int N1, int N2){

    int i, count = 0;
    int N3, N4;

    N3 = N1;
    N4 = N2;

    if(N4 == 0){
        return -1;
    }
    else{
        while(N3 % N4 == 0){
            N3 = N3 / N4;
            count++;
        }
        return count;
    }
}
