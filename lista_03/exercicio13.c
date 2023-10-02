#include <stdio.h>

int main()
{
    int N = 20, aux, i;
    int vetor[N];

    for (i = 0; i < N; ++i)
    {
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < N / 2; ++i)
    {
        aux = vetor[i];
        vetor[i] = vetor[N - i - 1];
        vetor[N - i - 1] = aux;
    }

    for (i = 0; i < N; ++i)
    {
        printf("%d ", vetor[i]);
    }

    return 0;
}


