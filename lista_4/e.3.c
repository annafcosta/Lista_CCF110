#include <stdio.h>

int main()
{
    int l = 5;
    double matriz[l][l];
    int i, j;

    for (i = 0; i < l; i++)
    {
        for (j = 0; j < l; j++)
        {
            scanf("%lf", &matriz[i][j]);
        }
    }

    for (i = 0; i < l; i++)
    {
        for (j = 0; j < l; j++)
        {
            if (i == j)
            {
                printf("%.2lf ", matriz[i][j]);
            }
        }
    }

    return 0;
}

