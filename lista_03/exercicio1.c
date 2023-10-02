#include <stdio.h>

int main() {
    int N = 5, i;
    int vetor[N];
    int existe_cinco = 0; // Variável para verificar a existência do número 5.

    for (i = 0; i < N; i++) {
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < N; i++) {
        if (vetor[i] == 5) {
            printf("%d\n", i);
            existe_cinco = 1; // Mostrar a posição em que o 5 existe.
        }
    }

    if (!existe_cinco) {
        printf("-1\n");
    }

    return 0;
}

