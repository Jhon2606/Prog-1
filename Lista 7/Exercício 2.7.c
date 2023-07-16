#include <stdio.h>

void repete(char a[], int b);

int main(){

int N;
char S[20];

printf("Digite um nome:\n");
scanf("%s", S);

printf("Digite o numero de vezes que o nome aparecera:\n");
scanf("%d", &N);

repete(S, N);

return 0;
}
void repete(char a[], int b){
    int i;
        for(i = 0; i < b; i++){
        printf("%s\n", a);
    }
}
