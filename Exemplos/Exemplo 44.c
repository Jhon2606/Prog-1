#include <stdio.h>

void HMS(int tempo, int *hh, int *mm, int *ss);

int main(){

   int seg, h, m, s;

   printf("Informe quantos seg o JO estudou\n");
   scanf("%d",&seg);

   HMS(seg,&h,&m,&s);

   printf("%d:%d:%d\n",h,m,s);

   return 0;
}

void HMS(int tempo, int *hh, int *mm, int *ss){
   *hh = tempo/3600;
   *mm = (tempo%3600)/60;
   *ss = tempo%60;
}
