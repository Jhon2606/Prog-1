#include <stdio.h>

int main(){

  int li, n, i, cont;

  printf("Informe o limite Inferior\n");
  scanf("%d", &li);
  printf("Informe o limite Superior\n");
  scanf("%d", &n);

  cont = 0;
  for(i = li; i <= n; i++){
    if ((i % 10) == 0){
      printf("O valor %d eh multiplo de 10\n",i);
      cont++;
    }
  }
  printf("Existe %d multiplos de 10\n", cont);

  return 0;
}
