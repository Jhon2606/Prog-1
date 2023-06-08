#include <stdio.h>

int main(){
    int ang1, ang2, ang3;

    printf("Primeiro angulo:\n");
    scanf("%d", &ang1);
    printf("Segundo angulo:\n");
    scanf("%d", &ang2);

    ang3 = 180 - (ang1 + ang2);

    printf("O terceiro angulo tem: %d graus", ang3);

    return 0;
}
