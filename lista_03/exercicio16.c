#include <stdio.h>
#include <math.h>

int main()
{
    int N = 15, i;
    float vetor[N];

    for (i = 0; i < N; i++)
    {
        scanf("%f", &vetor[i]);
    }

    for (i = 0; i < N; i++)
    {
        if (vetor[i] < 0)
        {
            vetor[i] = -1;
        }
        else
        {
            vetor[i] = sqrtf(vetor[i]);
        }
    }

    for (i = 0; i < N; i++)
    {
        printf("%.6f ", vetor[i]);
    }

    return 0;
}