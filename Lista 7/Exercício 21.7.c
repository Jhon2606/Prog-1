#include <stdio.h>

void repetir(int val);
int main(){

    int valor;

    repetir(valor);

    return 0;
}
void repetir(int val){

    do{
        printf("Digite um valor de 1 a 100:\n");
        scanf("%d", &val);

    }while(val < 1 || val > 100 );

}
