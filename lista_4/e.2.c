#include <stdio.h>

int main() {

    short int v[5] = {2, 5, 1, 4, 0};
    int v1[5] = {2, 5, 1, 4, 0};
    char c[5] = {'a', 'b', 'm', '4', '-'};
    float f[5] = {2.66, 0.125, 1.0, 4.99, 2.009};
    double d[5] = {2.66, 0.125, 1.0, 4.99, 2.009};

    printf("Tamanho em bytes de short int: %ld\n", (long)&v[1] - (long)&v[0]);
    printf("Tamanho em bytes de int: %ld\n", (long)&v1[1] - (long)&v1[0]);
    printf("Tamanho em bytes de char: %ld\n", (long)&c[1] - (long)&c[0]);
    printf("Tamanho em bytes de float: %ld\n", (long)&f[1] - (long)&f[0]);
    printf("Tamanho em bytes de double: %ld\n", (long)&d[1] - (long)&d[0]);

    return 0;
}
