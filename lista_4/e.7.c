#include <stdio.h>

int main()
{
    int l = 10;
    int matriz[l][l];
    int i, j;

    for (i = 0; i < l; i++)
    {
        for (j = 0; j < l; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < l; i++)
    {
        for (j = 0; j < l; j++)
        {
            if (j > i)
            {
                printf("%d ", matriz[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}
