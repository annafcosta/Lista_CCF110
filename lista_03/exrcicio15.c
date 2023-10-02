#include <stdio.h>

int main()
{
    int N = 10, i;
    int vetor_1[N], vetor_2[N];

    for (i = 0; i < N; ++i)
    {
        scanf("%d", &vetor_1[i]);
    }

    for (i = 0; i < N; ++i)
    {
        vetor_2[i] = vetor_1[i] * vetor_1[i];
    }

    for (i = 0; i < N; ++i)
    {
        printf("%d ", vetor_2[i]);
    }

    return 0;
}
