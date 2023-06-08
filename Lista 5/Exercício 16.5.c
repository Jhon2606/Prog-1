#include <stdio.h>

#define TAM 5
#define D1 5
#define D2 5
int main(){

    char vet[TAM][20];
    int i, j, M[D1][D2], s = 0, origem = 0, destino = j;

    for(i = 0; i < TAM; i++){
        printf("Digite o nome da cidade:\n");
        scanf("%[^\n]%c", vet[i]);
    }

    for(i = 0; i < D1; i++){
            for(j = 0; j < D2; j++){
                    if( i == j){
                        M[i][j] = 0;
                    }
                    else {
                printf("Digite a distancia entrea as cidades %s e %s:\n", vet[i], vet[j]);
                scanf("%d", &M[i][j]);

                  if(s < M[i][j]){
                        s = M[i][j];
                        origem = i;
                        destino = j;
                    }
                }
            }
        }
    for(i = 0; i < D1; i++){
            for(j = 0; j < D2; j++){
                if(M[i][j] <= 250 && M[i][j] != 0){
                    printf("O percurso de %s a %s e de: %d\n", vet[i], vet[j], M[i][j]);
                }
            }
        }
        printf("A maior distancia e de: %s a %s que e %d", vet[origem], vet[destino], s);

    return 0;
}
