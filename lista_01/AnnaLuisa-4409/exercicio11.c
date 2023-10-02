#include <stdio.h>

int main() {
    float L, M, N;

    printf("Digite 3 numeros separados por vírgula: ");
    scanf("%f, %f, %f", &L, &M, &N);

    if (L > N) 
    {
        L = L + N;
        N = L - N;
        L = L - N;
    }

    if (M > N) 
    {
        M = M + N;
        N = M - N;
        M = M - N;
    }

    if (L > M) 
    {
        L = L + M;
        M = L - M;
        L = L - M;
    }

    printf("Os valores em ordem crescente serão: %.2f, %.2f, %.2f.\n", L, M, N);

    return 0;
}
