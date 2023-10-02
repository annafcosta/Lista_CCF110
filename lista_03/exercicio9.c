#include <stdio.h>

int main()
{
    int N = 5, i;
    int vetor_1[N], vetor_2[N], vetor_3[N];

    for (i = 0; i < N; ++i)
    {
        scanf("%d", &vetor_1[i]);
        scanf("%d", &vetor_2[i]);
    }

    for (i = 0; i < N; ++i)
    {
        vetor_3[i] = vetor_1[i] + vetor_2[i];
    }

    for (i = 0; i < N; ++i)
    {
        printf("%d ", vetor_3[i]);
    }

    return 0;
}
