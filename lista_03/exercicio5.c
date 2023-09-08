#include <stdio.h>

int main()
{
    int N = 10, i;
    int vetor[N];
    int vetor_de_sub[N]; // Declarar o vetor de substituição.

    for (i = 0; i < N; ++i)
    {
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < N; ++i)
    {
        if (vetor[i] < 10)
        {
            vetor_de_sub[i] = 1;
        } else
        {
            vetor_de_sub[i] = vetor[i];
        }
    }

    for (i = 0; i < N; ++i)
    {
        printf("%d ", vetor[i]);
    }

    printf("\n");

    for (i = 0; i < N; ++i)
    {
        printf("%d ", vetor_de_sub[i]);
    }

    return 0;
}

