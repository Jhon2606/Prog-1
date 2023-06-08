#include <stdio.h>

#define TAM 3

typedef struct produto{
   char desc[100];
   int codigo;
   float preco;
   int qtdEstoque;
   int qtdMin;
} Produto;

int main(){

   Produto lp[TAM];
   int i, k, achou;

   for (i = 0; i < TAM; i++){
      printf("Informe a Descricao\n");
      scanf("%s", lp[i].desc);
      printf("Informe o Codigo\n");
      scanf("%d", &lp[i].codigo);
      printf("Informe o Preco\n");
      scanf("%f", &lp[i].preco);
      printf("Informe o Quant Atual Estoque\n");
      scanf("%d", &lp[i].qtdEstoque);
      printf("Informe a Quant Min Estoque\n");
      scanf("%d", &lp[i].qtdMin);
   }

   printf("Qual o codigo do produto a ser pesquisado\n");
   scanf("%d",&k);

   achou = 0;  //0 se não achou e 1 se achou
   for (i = 0; i < TAM; i++){
      if (lp[i].codigo == k){
        achou = 1;
        printf("O produto %s tem preco %.2f e Quantidade no Estoque de %d\n", lp[i].desc, lp[i].preco, lp[i].qtdEstoque);
      }
   }

   if (achou == 0){
     printf("Produto Nao Encontrado\n");
   }

   for(i = 0; i < TAM; i++){
      if (lp[i].qtdEstoque < lp[i].qtdMin){
        printf("%s abaixo do estoque minimo\n", lp[i].desc);
      }
   }
   return 0;
}
