#include <stdio.h>

int main(){

    int dvd, dvs, q;

    printf("Informe o dividendo\n");
    scanf("%d",&dvd);
    printf("Informe o divisor\n");
    scanf("%d",&dvs);

    q = 0;
    while(dvd >= dvs){
        q++;
        dvd = dvd-dvs;
    }

    printf("Quociente %d e Resto %d\n", q, dvd);

   return 0;
}
