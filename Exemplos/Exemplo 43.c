#include <stdio.h>

float calcmedia(float x, float y, float z);

int main(){

   float p1, p2, p3, m;

   printf("Informe Nota da P1\n");
   scanf("%f",&p1);
   printf("Informe Nota da P2\n");
   scanf("%f",&p2);
   printf("Informe Nota da P3\n");
   scanf("%f",&p3);

   m = calcmedia(p1,p2,p3);
   printf("A sua media eh %.2f\n",m);
   return 0;
}

float calcmedia(float x, float y, float z){
   float media;
   media = (x+y+z)/3;
   return media;
}
