#include <stdio.h>

int letra(char c);

int main(){

    char C;

    printf("Digite um caracter:\n");
    scanf("%c", &C);

    letra(C);

    if(letra(C)){
        printf("E uma letra do alfabeto.\n");
    }
    else{
        printf("nao e uma letra do alfabeto.\n");
    }

    return 0;
}
int letra(char c){

    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
        return 1;
       }
    else{
        return 0;
    }
}
