#include <stdio.h>

int main(){

    float area, diagonall, diagonal2;

    printf("Diagonal maior:\n");
    scanf("%f", &diagonall);

    printf("Diagonal menor:\n");
    scanf("%f", &diagonal2);

    area = (diagonall * diagonal2)/2;

    printf ("A area do losango e de:%.2f\n",area);

    return 0;
}
