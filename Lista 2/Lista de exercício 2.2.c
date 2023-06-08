#include <stdio.h>

int main(){

float n1, n2, nf;

printf("Digite uma nota:\n");
scanf("%f", &n1);
printf("Digite outra nota:\n");
scanf("%f", &n2);

nf = (n1 + n2)/2;
printf("Sua media foi de:%.2f\n", nf);

if(nf <= 4){
    printf("Reprovado\n");
}
else if ( nf <= 7 ){

    printf("Exame\n");
}
else{
    printf("Aprovado\n");
}

    return 0;
}
