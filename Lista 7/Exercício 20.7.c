#include <stdio.h>

int SEG(int h, int m, int s);
void HMS(int tempo, int *hh, int *mm, int *ss);
int main(){

    int tempo11, tempo12, tempo13, tempo21, tempo22, tempo23;
    int seg, seg2, seg3, h, m,  s;

    printf("Digite a primeira medida de tempo:\n");
    scanf("%d" "%d" "%d", &tempo11, &tempo12, &tempo13);
    printf("Digite a segunda medida de tempo:\n");
    scanf("%d" "%d" "%d", &tempo21, &tempo22, &tempo23);

    seg = SEG(tempo11, tempo12, tempo13);
    seg2 = SEG(tempo21, tempo22, tempo23);
    seg3 = seg - seg2;

    HMS(seg3,&h,&m,&s);

    printf("%d:%d:%d\n",h,m,s);
    return 0;
}
int SEG(int h, int m, int s){

    int total;

    h = h * 3600;
    m = m * 60;

    total = h + m + s;

    return total;
}
void HMS(int tempo, int *hh, int *mm, int *ss){
   *hh = tempo/3600;
   *mm = (tempo%3600)/60;
   *ss = tempo%60;
}
