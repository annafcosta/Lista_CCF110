#include <stdio.h>

int main() {
    float L, M, N;
    float menor, medio, maior;

    printf("Digite um valor para L: ");
    scanf("%f", &L);
    printf("Digite um valor para M: ");
    scanf("%f", &M);
    printf("Digite um valor para N: ");
    scanf("%f", &N);

    if (L < M && L < N) {
        menor = L;
        if (M < N) {
            medio = M;
            maior = N;
        }
        else {
            medio = N;
            maior = M;
        }
    }
    else if (M < L) {
        menor = M;
        if (L < N) {
            medio = L;
            maior = N;
        } else {
            medio = N;
            maior = L;
        }
    }
    else {
        menor = N;
        if (M < L) {
            medio = M;
            maior = L;
        } else {
            medio = L;
            maior = M;
        }
    }

    printf("Os valores em ordem crescente serão: %.2f, %.2f, %.2f.\n", menor, medio, maior);

    return 0;
}

