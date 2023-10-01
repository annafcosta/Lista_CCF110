#include <stdio.h>

int main()
{
    int l = 3, c = 5;
    int matriz[l][c], matriz_2[l][c];
    int matriz_S[l][c], matriz_D[l][c];
    int i, j;

    for (i = 0; i < l; ++i)
    {
        for (j = 0; j < c; ++j)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < l; ++i)
    {
        for (j = 0; j < c; ++j)
        {
            scanf("%d", &matriz_2[i][j]);
        }
    }

    for (i = 0; i < l; ++i)
    {
        for (j = 0; j < c; ++j)
        {
            matriz_S[i][j] = matriz[i][j] + matriz_2[i][j];
            matriz_D[i][j] = matriz[i][j] - matriz_2[i][j];
        }
    }

    for (i = 0; i < l; ++i)
    {
        for (j = 0; j < c; ++j)
        {
            printf("%d ", matriz_S[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for (i = 0; i < l; ++i)
    {
        for (j = 0; j < c; ++j)
        {
            printf("%d ", matriz_D[i][j]);
        }
        printf("\n");
    }

    return 0;
}
