#include <stdio.h>

int main()
{
    int N = 5, produto, A, i;
    int vetor[N];

    scanf("%d", &A);

    for (i = 0; i < N; ++i)
    {
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < N; ++i)
    {
        produto = A * vetor[i];

        if (produto % 2 == 0)
        {
            printf("%d par \n", produto);
        } else
        {
            printf("%d impar \n", produto);
        }
    }

    return 0;
}



