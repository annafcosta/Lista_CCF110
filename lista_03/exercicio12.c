#include <stdio.h>

int main()
{
    int N = 10, num, i;
    int vetor[N];

    for (i = 0; i < N; ++i)
    {
        scanf("%d", &vetor[i]);
    }

    scanf("%d", &num);

    for (i = 0; i < N; ++i)
    {
        if (vetor[i] < num)
        {
            printf("%d ", vetor[i]);
        }
    }

}
