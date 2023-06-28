#include <stdio.h>

int espaco(char *a);
int main(){

    char S[20];
    int p;

    printf("Digite um nome:\n");
    scanf("%[^\n]", S);

    p = espaco(S);
    printf("O nome \%s\ possui %d espacos.\n", S, p);

    return 0;
}
int espaco(char *a){

    int i, j = 0;

    for(i = 0; a[i] != '\0'; i++){
    if(a[i] == ' '){
        j++;
    }
    }
    return j;
}
