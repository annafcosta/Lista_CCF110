#include <stdio.h>

int main() {
    int n = 2;
    int vetor_1[n], vetor_2[n], vetor_resultante[2 * n], i;

    for (i = 0; i < n; i++) {
        scanf("%d", &vetor_1[i]);
    }

    for (i = 0; i < n; i++) {
        scanf("%d", &vetor_2[i]);
    }

    for (i = 0; i < n; i++) {
        vetor_resultante[i * 2] = vetor_1[i];
        vetor_resultante[(i * 2) + 1] = vetor_2[i];
    }

    for (i = 0; i < 2 * n; i++) {
        printf("%d ", vetor_resultante[i]);
    }

    return 0;
}

