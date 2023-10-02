
#include <stdio.h>

int main()
{
    int C, D, E, F;

    scanf("%d %d %d %d", &C, &D, &E, &F);

    // Verificar se o produto matricial é possível
    if (D != E)
    {
        printf("\nImpossível");
        return 0;
    }

    int A[C][D], B[E][F], G[C][F];

    for (int i = 0; i < C; i++)
        for (int j = 0; j < D; j++)
            scanf("%d", &A[i][j]);

    for (int i = 0; i < E; i++)
        for (int j = 0; j < F; j++)
            scanf("%d", &B[i][j]);

    // Calcular o produto matricial
    for (int i = 0; i < C; i++)
    {
        for (int j = 0; j < F; j++)
        {
            G[i][j] = 0;
            for (int k = 0; k < D; k++)
            {
                G[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    for (int i = 0; i < C; i++)
    {
        for (int j = 0; j < F; j++)
        {
            printf("%d ", G[i][j]);
        }
        printf("\n");
    }

    return 0;
}
