#include <stdio.h>
#include <math.h>

int main() {
    int num_quadros = 64;
    long long  num_graos = 1;
     long long total_graos = 0;

    for (int i = 1; i <= num_quadros; i++) {
        total_graos += num_graos;
        num_graos *= 2;
    }

    printf("O monge esperava receber um total de %lld graos de trigo.\n", total_graos);

    return 0;
}
