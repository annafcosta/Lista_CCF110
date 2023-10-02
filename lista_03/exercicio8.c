#include <stdio.h>

int main() {
    int n, i;

    scanf("%d", &n);

    // Declarando os vetores A e B após a leitura de n.

    float vetor_A[n], vetor_B[n], vetor_C[n], vetor_D[n];

    for (i = 0; i < n; i++) {
        scanf("%f", &vetor_A[i]);
    }

    for (i = 0; i < n; i++) {
        scanf("%f", &vetor_B[i]);
    }

    // Aplicando as restrições para o vetor C:

    printf("C: ");

    for (i = 0; i < n; i++) {
        if (vetor_A[i] > vetor_B[i]) {
            vetor_C[i] = vetor_A[i];
        } else {
            vetor_C[i] = vetor_B[i];
        }
        printf("%.0f ", vetor_C[i]);
    }

    printf("\n");

    // Calculando a média:

    for (i = 0; i < n; i++) {
        vetor_D[i] = (vetor_A[i] + vetor_B[i]) / 2.0;
    }

    printf("D: ");
    for (i = 0; i < n; i++) {
        printf("%.2f ", vetor_D[i]);
    }

    return 0;
}


