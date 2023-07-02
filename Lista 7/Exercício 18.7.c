#include <stdio.h>

SEG(int h, int m, int s);
int main(){

    int hora, minuto, segundo, total;

    printf("digite a hora:\n");
    scanf("%d", &hora);
    printf("Digite o minuto:\n");
    scanf("%d", &minuto);
    printf("Digite os segundos:\n");
    scanf("%d", &segundo);

    total = SEG(hora, minuto, segundo);

    printf("O total de segundos e:%d\n", total);

    return 0;
}

int SEG(int h, int m, int s){

    int total;

    h = h * 3600;
    m = m * 60;

    total = h + m + s;

    return total;
}
